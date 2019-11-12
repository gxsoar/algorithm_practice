#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int now = 1, len= nums.size();
        for(int i = 2; i < len; i++) {
            if(nums[i] != nums[now - 1]) {
                nums[++now] = nums[i];
            }
        }
        return now + 1;
    }
};

int main() { return 0; }