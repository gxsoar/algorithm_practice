#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> arr;
        arr.push_back(0);
        for(auto d : nums) {
            arr.push_back(arr.back() + (d & 1));
        }
        unordered_map<int,int> ump;
        int cnt = 0;
        for(auto x : arr) {
            cnt += ump[x - k];
            ump[x]++;
        }
        return cnt;
    }
};

int main() { return 0; }