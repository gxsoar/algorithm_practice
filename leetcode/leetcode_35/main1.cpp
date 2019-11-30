#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator ite = find(nums.begin(), nums.end(), target);
        int ans;
        if (ite != nums.end()) {
            auto bound = lower_bound(nums.begin(), nums.end(), target);
            ans = bound - nums.begin();
        } else {
            auto bound = lower_bound(nums.begin(), nums.end(), target);
            ans = bound - nums.begin();
            nums.insert(bound, target);
        }
        return ans;
    }
};

int main() {
    return 0;
}