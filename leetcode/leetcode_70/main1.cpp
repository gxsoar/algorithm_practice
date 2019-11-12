#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e6 + 10;
int dp[MAXN];
class Solution {
public:
    int climbStairs(int n) {
        dp[1] = 1; dp[2] = 2;
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};

int main() {
    Solution e;
    int x; cin >> x;
    cout << e.climbStairs(x) << endl;
    return 0;
}