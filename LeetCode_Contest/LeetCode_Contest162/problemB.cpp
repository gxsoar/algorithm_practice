#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<vector<int>> reconstructMatrix(int upper, int lower,
                                          vector<int>& colsum) {
        int n = colsum.size();
        vector<vector<int>> ans(2, vector(n, 0));
        for (int i = 0; i < n; i++) {
            if (colsum[i] == 2) {
                ans[0][i] = ans[1][i] = 1;
                upper--;
                lower--;
            }
            if (colsum[i] == 1) {
                if (upper <= lower) {
                    ans[1][i] = 1;
                    lower--;
                } else {
                    ans[0][i] = 1;
                    upper--;
                }
            }
        }
        if (upper == 0 && lower == 0)
            return ans;
        else {
            ans.clear();
            return ans;
        }
    }
};

int main() {
    return 0;
}