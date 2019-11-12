#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        fill(remove(nums.begin(), nums.end(), 0), nums.end(), 0);
    }
};

int main() { return 0; }