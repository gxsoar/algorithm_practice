#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 0x3f3f3f3f
const int MAXN = 100010;
int dp[MAXN];
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        //vector<int> dp;
        int n = nums.size();
        int ans = 0;
        for(int  i = 0; i < n; i++) {
            dp[i] = 1;
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) dp[i] = max(dp[i],dp[j] + 1);
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};

int main()
{

    return 0;
}