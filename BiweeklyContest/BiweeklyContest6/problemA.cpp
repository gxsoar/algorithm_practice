#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

class Solution {
   public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int len = nums.size();
        int cnt = 0;
        for(int i = 0; i < len; i++) {
            if(nums[i] == target) cnt++;
        }
        return (cnt > len / 2);
    }
};

int main() {
    return 0;
}
