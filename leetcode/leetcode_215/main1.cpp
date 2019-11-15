#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > q;
        int ans = nums[0];
        for(auto n : nums) {
            q.push(n);
            if(q.size() > k) {
               q.pop();
            }
        }
        return q.top();
    }
};

int main() {
    return 0;
}