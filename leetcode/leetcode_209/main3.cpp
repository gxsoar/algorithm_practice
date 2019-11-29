#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }
        //枚举前缀和
        int ans = INT_MAX;
        for (int i = 0; i <= n; i++) {
            int to_find = s + sum[i];
            auto bound = lower_bound(sum.begin(), sum.end(), to_find);
            if(bound != sum.end()) {
                int len = bound - (sum.begin() + i);
                ans = min(ans, len);
            }
        }
        return ans != INT_MAX ? ans : 0;
    }
};
int main() { return 0; }