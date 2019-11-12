#include <algorithm>
#include <vector>
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution {
   public:
    int countLetters(string S) {
        int n = S.size();
        int ans = 0;
        int lenth = 1;
        for(int i = 0; i < n; i++) {
            if(S[i] == S[i + 1]) lenth++;
            else {
                ans += lenth * (lenth + 1) / 2;
                lenth = 1;
                continue;
            }
        }
        return ans;
    }
};

int main() {
    string s;
    cin >> s;
    Solution e;
    cout << e.countLetters(s) << endl;
    return 0;
}
/*
a 1
aa 1 a 2
aaa 1 aa 2 a 3
*/