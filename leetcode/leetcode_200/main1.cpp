#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
class Solution {
   public:
    int n, m;
    void DFS(vector<vector<char>>& maze, int x, int y) {
        maze[x][y] = '0';
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (maze[nx][ny] == '1') {
                DFS(maze, nx, ny);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int ans = 0;
        n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    ans++;
                    DFS(grid, i, j);
                }
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}