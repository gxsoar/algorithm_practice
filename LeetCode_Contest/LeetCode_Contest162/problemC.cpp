#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, 1, -1, 0};
class Solution {
   public:
    int n, m;
    void DFS(vector<vector<int>>& maze,int x, int y) {
        maze[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == 0) {
                DFS(maze, nx, ny);
            }
        }
        return;
    }
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    if (grid[i][j] == 0) DFS(grid, i, j);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
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