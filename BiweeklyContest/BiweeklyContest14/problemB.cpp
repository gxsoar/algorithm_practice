#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<vector<int>> removeInterval(vector<vector<int>>& intervals,
                                       vector<int>& toBeRemoved) {
        vector<vector<int>> ans;
        int t1 = toBeRemoved[0], t2 = toBeRemoved[1];
        for (auto in : intervals) {
            int a = in[0], b = in[1];
            if (a >= t1 && b <= t2) continue;
            if (a < t1 && b > t2) {
                ans.push_back(vector<int>{a, t1});
                ans.push_back(vector<int>{t2, b});
                continue;
            }
            if (a < t1 && b > t1) {
                ans.push_back(vector<int>{a, t1});
                continue;
            }
            if (a < t2 && b > t2) {
                ans.push_back(vector<int>{t2, b});
                continue;
            }
            ans.push_back(vector<int>{a, b});
        }
        return ans;
    }
};

int main() { return 0; }