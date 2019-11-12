#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return nums.size();
        int i = 0, j;
        for(j = 0; j < nums.size(); j++) {
            if(nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
};

int main() {
    int x;
    int n;
    cin >> n;
    Solution e;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    int val;
    cin >> val;
    cout << e.removeElement(v, val);
    return 0;
}