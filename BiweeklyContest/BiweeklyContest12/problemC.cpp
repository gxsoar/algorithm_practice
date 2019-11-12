#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;
int len, point, top;  //记录直径，最远点
struct node {
    int to, next, w;
} edge[MAXN];
int dis[MAXN];  //记录距离
bool vis[MAXN];
int head[MAXN];

class Solution {
   public:
    void addEdge(int u, int v, int z) {
        edge[top].to = v;
        edge[top].w = z;
        edge[top].next = head[u];
        head[u] = top++;
    }
    void BFS(int s) {
        queue<int> qu;
        memset(dis, 0, sizeof(dis));
        vis[s] = 1;
        qu.push(s);
        while (!qu.empty()) {
            int x = qu.front();
            qu.pop();
            for (int i = head[x]; i != -1; i = edge[i].next) {
                int y = edge[i].to;
                if (!vis[y]) {
                    dis[y] = dis[x] + edge[i].w;
                    if (len < dis[y]) {
                        len = dis[y];
                        point = y;
                    }
                    vis[y] = 1;
                    qu.push(y);
                }
            }
        }
    }
    int treeDiameter(vector<vector<int>>& edges) {
        memset(head, -1, sizeof(head));
        for (auto e : edges) {
            addEdge(e[0], e[1], 1);
            addEdge(e[1], e[0], 1);
        }
        len = 0;
        memset(vis, 0, sizeof(vis));
        BFS(0);
        len = 0;
        memset(vis, 0, sizeof(vis));
        BFS(point);
        return len;
    }
};

int main() { return 0; }