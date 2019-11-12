#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAXN = 1e5 + 10;
struct pos{
    int from,to,cost;
    bool friend operator<(pos a, pos b) {
        return a.cost < b.cost;
    }
}e[MAXN];
int fa[MAXN];

class Solution {
   public:
    int find(int x) {
        if(x == fa[x]) return x;
        return fa[x] = find(fa[x]);
    }
    int minCostToSupplyWater(int n, vector<int>& wells, vector<vector<int>>& pipes) {
        for(int i = 0; i <= n; i++) fa[i] = i;
        int top = 0;
        for(int i = 0; i < wells.size(); i++) {
            e[++top].from = 0;
            e[top].to = i + 1;
            e[top].cost = wells[i];
        }
        for(int i = 0; i < pipes.size(); i++) {
            e[++top].from = pipes[i][0];
            e[top].to = pipes[i][1];
            e[top].cost = pipes[i][2];
        }
        sort(e + 1, e + top + 1);
        int ans = 0;
        for(int j = 1; j <= top; j++) {
            int p = find(e[j].from);
            int q = find(e[j].to);
            if(p == q) continue;
            fa[p] = q;
            ans += e[j].cost;
        }
        return ans;
    }
};

int main() { return 0; }