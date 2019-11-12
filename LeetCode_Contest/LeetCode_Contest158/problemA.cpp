#include <bits/stdc++.h>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, cnt = 0;
        for(auto ch : s) {
            if(ch == 'R') cnt++;
            else cnt--;
            ans += !cnt;
        }
        return ans;
    }
};

int main() {
    Solution e;
    string t;
    cin >> t;
    cout << e.balancedStringSplit(t) << endl;
    return 0;
}