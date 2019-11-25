class Solution {
   public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> coloumn(n + m, 0);
        vector<int> row(n + m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j]) {
                    coloumn[i]++;
                    row[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] && (coloumn[i] >= 2 || row[j] >= 2)) ans++;
            }
        }
        return ans;
    }
};