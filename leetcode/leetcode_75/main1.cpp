#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int p0 = 0, p2 = nums.size() - 1;
        int now = 0;
        while(now <= p2) {
            if(nums[now] == 0) {
                swap(nums[now++], nums[p0++]);
            }
            else if (nums[now] == 2) {
                swap(nums[now++], nums[p2--]);
            }
            else now++;
        }
    }
};

int main() {
    return 0;
}
