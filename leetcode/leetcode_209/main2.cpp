#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans = INT_MAX;
        int index1 = 0, index2 = 0, n = nums.size();
        int sum = 0;
        while (index1 < n && index2 < n) {
            sum += nums[index2];
            while (sum >= s) {
                ans = min(ans, index2 - index1 + 1);
                sum -= nums[index1];
                index1++;
            }
            index2++;
        }
        return ans != INT_MAX ? ans : 0;
    }
};

int main() {
    return 0;
}