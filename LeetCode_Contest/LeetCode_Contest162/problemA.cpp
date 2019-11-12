#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> maze(n + 1, vector(m + 1, 0));
        for (auto e : indices) {
            for (int i = 0; i < m; i++) maze[e[0]][i]++;
            for (int j = 0; j < n; j++) maze[j][e[1]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (maze[i][j] & 1) ans++;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}