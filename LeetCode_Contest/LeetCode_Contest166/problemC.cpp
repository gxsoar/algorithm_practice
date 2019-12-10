#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    bool check(vector<int>& v, int x, int flag) {
        int sum = 0;
        for (auto val : v) {
            sum += (val + x - 1) / x;
        }
        return sum <= flag;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int l = 1, r = *max_element(nums.begin(), nums.end());
        while (l < r) {
            int mid = (l + r) >> 1;
            if (check(nums, mid, threshold))
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

int main() {
    return 0;
}