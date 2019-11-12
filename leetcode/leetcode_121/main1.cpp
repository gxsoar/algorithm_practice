#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if(n == 0) return 0;
        vector<vector<int> > dp(n + 1, vector<int>(3,0));
        dp[0][0] = 0; dp[0][1] = -1 *prices[0];
        for(int i = 1; i < n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(dp[i - 1][1], -1 * prices[i]);
        }
        return dp[n - 1][0];
    }
};

int main() {

    return 0;
}