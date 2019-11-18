#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string encode(int num) {
        string ans;
        num++;
        while (num) {
            ans += to_string(num & 1);
            num >>= 1;
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    string n;
    cin >> n;
    Solution e;
    cout << e.encode(n) << endl;
    return 0;
}