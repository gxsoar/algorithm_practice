#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int m, n;
    bool check(int x, int y) { return (x >= 0 && x < m && y >= 0 && y < n); }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        m = mat.size(), n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        //先遍历原数组第一行
        int r = 0;
        while (r < n) {
            vector<int> t;
            int nc = 0, nr = r;
            while (check(nc, nr)) {
                t.push_back(mat[nc][nr]);
                nc++;
                nr++;
            }
            sort(t.begin(), t.end());
            nc = 0, nr = r;
            int k = 0;
            while (check(nc, nr) && k < t.size()) {
                ans[nc][nr] = t[k];
                nc++;
                nr++;
                k++;
            }
            r++;
        }
        //遍历原数组第一列
        int c = 1;
        while (c < m) {
            vector<int> t;
            int nc = c, nr = 0;
            while (check(nc, nr)) {
                t.push_back(mat[nc][nr]);
                nc++;
                nr++;
            }
            sort(t.begin(), t.end());
            nc = c, nr = 0;
            int k = 0;
            while (check(nc, nr) && k < t.size()) {
                ans[nc][nr] = t[k];
                nc++;
                nr++;
                k++;
            }
            c++;
        }
        return ans;
    }
};

int main() { return 0; }