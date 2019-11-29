#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        sum[0] = 0;
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + nums[i];
        }
        //枚举前缀和
        int minarraylen = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                if (sum[i + j] - sum[i] >= s) {
                    minarraylen = min(minarraylen, j);
                }
            }
        }
        return minarraylen != INT_MAX ? minarraylen : 0;
    }
};
int main() {
    return 0;
}