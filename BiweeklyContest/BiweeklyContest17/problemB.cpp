class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        vector<int> temp;
        vector<vector<int>> ans;
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; i++) {
            temp.clear();
            for (int j = 0; j < m; j++) {
                int sum = 0;
                for (int r = max(i - K, 0); r <= min(n - 1, i + K); r++) {
                    for (int c = max(j - K, 0); c <= min(m - 1, j + K); c++) {
                        sum += mat[r][c];
                    }
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};