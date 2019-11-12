#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> minAvailableDuration(vector<vector<int>>& slots1,vector<vector<int>>& slots2,int duration) {
        sort(slots1.begin(), slots1.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0]; });
        sort(slots2.begin(), slots2.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0]; });
        vector<int> ans;
        int n = slots1.size(), m = slots2.size();
        int i, j;
        for(i = 0, j = 0; i < n && j < m;) {
            if(min(slots1[i][1], slots2[j][1]) - max(slots2[j][0], slots1[i][0]) >= duration) {
                ans.push_back(max(slots1[i][0], slots2[j][0]));
                ans.push_back(max(slots1[i][0], slots2[j][0]) + duration);
                return ans;
            }
            else if(slots1[i][1] < slots2[j][1]) i++;
            else j++;
        }
        return ans;
    }
};

int main() {
    return 0;
}