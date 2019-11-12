#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
class Solution {
   public:
    vector<vector<int>> maze, vis;
    int n, m;
    int ans;
    void DFS(int st, int ed, int cost) {
        if(cost > ans) ans = cost;
        vis[st][ed] = 1;
        for(int i = 0; i < 4; i++) {
            int nx = st + dx[i];
            int ny = ed + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny]) {
                DFS(nx, ny, cost + maze[nx][ny]);
            }
        }
        vis[st][ed] = 0;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        m = grid[0].size();
        n = grid.size();
        maze = grid;
        ans = 0;
        vis = vector<vector<int>> (n, vector<int>(0,m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(maze[i][j]) {
                    DFS(i, j, maze[i][j]);
                }
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}