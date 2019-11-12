#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF  0x3f3f3f3f
const int MAXN = 100010;
int dp[MAXN];
class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        //vector<int> dp;
        int n = nums.size();
        fill(dp, dp + n,INF);
        for(int i = 0; i < n; i++) {
            *lower_bound(dp, dp + n, nums[i]) = nums[i];
        }
        return (lower_bound(dp, dp + n, INF) - dp);
    }
};

int main() {

    return 0;
}