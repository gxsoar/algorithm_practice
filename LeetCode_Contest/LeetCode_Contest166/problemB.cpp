#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> t[510];
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            t[groupSizes[i]].push_back(i);
            if (t[groupSizes[i]].size() == groupSizes[i]) {
                vector<int> temp = t[groupSizes[i]];
                ans.push_back(temp);
                t[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}