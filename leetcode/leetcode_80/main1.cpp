#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 2) return nums.size();
        int target = nums[0], cnt = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(target == nums[i]) {
                cnt++;
                if(cnt > 2) {
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }
            else {
                target = nums[i];
                cnt = 1;
            }
        } 
        return nums.size();
    }
};

int main() {
    return 0;
}