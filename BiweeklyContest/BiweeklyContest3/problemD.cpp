#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;


typedef pair<int,int> P;
bool vis[110][110];
int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
class Solution {
public:
    vector<vector<int> > maze;
    int n, m;
    bool BFS(int limit) {
        if(maze[0][0] < limit) return false;
        memset(vis,0,sizeof(vis));
        queue<P> q;
        P e; e.first = 0, e.second = 0;
        q.push(e);
        vis[0][0] = true;
        while(!q.empty()) {
            e = q.front(); q.pop();
            for(int i = 0; i < 4; i++) {
                P e2;
                e2.first = e.first + dx[i];
                e2.second = e.second + dy[i];
                if(e2.first < 0 || e2.first >= n || e2.second < 0 || e2.second >= m)
                    continue;
                if(vis[e2.first][e2.second] || maze[e2.first][e2.second] < limit)
                    continue;
                q.push(e2);
                vis[e2.first][e2.second] = true;
            }
        }
        return vis[n - 1][m - 1];
    }
    int maximumMinimumPath(vector<vector<int>> &A) {
        this->maze = A;
        n = A.size(); m = A[0].size();
        int l = 0, r = 1e9;
        while(l < r) {
            int mid = (l + r + 1) / 2;
            if(!BFS(mid)) {
                r = mid - 1;
            } else l = mid;
        }
        return r;
    }
};

int main() {
    return 0;
}