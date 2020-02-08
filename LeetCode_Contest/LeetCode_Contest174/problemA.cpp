#include <bits/stdc++.h>

using namespace std;

struct num {
    int val, id;
    bool friend operator<(num a, num b) {
        if (a.val == b.val) return a.id < b.id;
        return a.val < b.val;
    }
};
class Solution {
   public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        num e[n + m];
        for (int i = 0; i < m; i++) {
            e[i].val = 0;
            for (int j = 0; j < n; j++) {
                e[i].val += mat[i][j];
            }
            e[i].id = i;
        }
        sort(e, e + m);
        // for (int i = 0; i < m; i++) {
        //     cout << e[i].id << " " << e[i].val << endl;
        // }
        // cout << endl;
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(e[i].id);
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
