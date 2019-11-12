#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
   public:
    int romanToInt(string s) {
        map<char, int> alp;
        alp['I'] = 1;
        alp['V'] = 5;
        alp['X'] = 10;
        alp['L'] = 50;
        alp['C'] = 100;
        alp['D'] = 500;
        alp['M'] = 1000;
        int n = s.size();
        int ans = 0;
        bool flag = false;
        int i = 0;
        while(i < n) {
            if(i < n - 1) {
                if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    ans += alp[s[i + 1]] - alp[s[i]];
                    i += 2;
                    continue;
                }
                if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    ans += alp[s[i + 1]] - alp[s[i]];
                    i += 2;
                    continue;
                }
                if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    ans += alp[s[i + 1]] - alp[s[i]];
                    continue;
                }
            }
            ans += alp[s[i]];
            i++;
        }
        return ans;
    }
};

int main() {
    string s;
    cin >> s;
    Solution e;
    cout << e.romanToInt(s) << endl;
    return 0;
}