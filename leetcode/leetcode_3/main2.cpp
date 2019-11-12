#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        int ans = 0;
        for(i = 0; i < n; i++) {
            for(int k = j; k < i; k++) {
                if(s[k] == s[i]) {
                    j = k + 1;
                    break;
                }
                ans = max(ans, i - j);
            }
        }
        return ans;
    }
};

int main() {
    Solution e;
    string s;
    cin >> s;
    cout << e.lengthOfLongestSubstring(s) << endl;
    return 0;
}
/*

a b c a b c b b

*/