#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <map>
#include <set>

using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int n = s.size();
        int lenth = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            lenth = 0;
            charSet.clear();
            for(int j = i; j < n; j++) {
                charSet.insert(s[j]);
                //cout << charSet.size() << endl;
                lenth++;
                if(charSet.size() < lenth) {
                    lenth--;
                    break;
                }
                else continue;
            }
            ans = max(ans,lenth);
        }
        return ans;
    }
};

int main()
{
    Solution e;
    string s;
    cin >> s;
    cout << e.lengthOfLongestSubstring(s) << endl;
    return 0;
}
/*

a b c a b c b b

*/