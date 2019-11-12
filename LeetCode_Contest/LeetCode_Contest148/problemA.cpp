#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution {
   public:
    int movesToMakeZigzag(vector<int>& nums) {
        int ans1 = 0, ans2 = 0;
        int len = nums.size();
        for (int i = 1; i < len - 1; i += 2) {
            int temp = min(nums[i - 1], nums[i + 1]);
            if (nums[i] < temp)
                continue;
            else if (nums[i] == temp)
                ans1++;
            else
                ans1 += nums[i] - temp + 1;
        }
        for (int i = 0; i < len - 2; i += 2) {
            int temp = max(nums[i], nums[i + 2]);
            if (nums[i + 1] < temp)
                ans2 += temp - nums[i + 1] + 1;
            else if (nums[i + 1] == temp)
                ans2++;
            else
                continue;
        }
        return min(ans1, ans2);
    }
};

int main() {
    return 0;
}
/*

 */