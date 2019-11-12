#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for(auto a : nums) {
            if(a == 0)
                cnt++;
        }
        int i = 0, n = nums.size();
        while(cnt > 0 && i < n) {
            if(nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                cnt--;
                if(i == 0) continue;
                else i--;
            }
            i++;
        }
    }
};

int main() {
    return 0;
}