#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 1, 0};
class Solution {
   public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens,vector<int>& king) {
        vector<vector<int>> ans;
        vector<int> v;
        int x, y;
        bool vis[10][10];
        memset(vis,0,sizeof(vis));
        for(auto q : queens) {
            vis[q[0]][q[1]] = true;
        }
        for(int i = 0; i < 8; i++) {
            for(x = king[0], y = king[1]; x >= 0 && x < 8 && y >= 0 && y < 8; x += dx[i], y += dy[i]) {
                if(vis[x][y]) {
                    v.clear();
                    v.push_back(x); v.push_back(y);
                    ans.push_back(v);
                    break;
                }
            }
        }
        return ans;
    }
};

int main() { return 0; }