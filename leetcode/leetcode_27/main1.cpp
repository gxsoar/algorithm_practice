#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};

int main() {
    int x;
    int n;
    cin >> n;
    Solution e;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    int val;
    cin >> val;
    cout << e.removeElement(v, val);
    return 0;
}