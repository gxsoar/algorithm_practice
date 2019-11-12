#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool check(string s) {
        sort(s.begin(),s.end());
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i - 1]) return false;
        }
        return true;
    }
    int numKLenSubstrNoRepeats(string S, int K) {
        if(S.size() < K) return 0;
        int ans = 0;
        for(int i = 0; i < S.size() - K + 1; i++) {
            string temp = S.substr(i,K);
            //cout << temp << endl;
            if(check(temp)) ans++;
        }
        return ans;
    }
};

int main() {
    string s;
    int k;
    cin >> s >> k;
    Solution e;
    cout << e.numKLenSubstrNoRepeats(s,k) << endl;
    return 0;
}