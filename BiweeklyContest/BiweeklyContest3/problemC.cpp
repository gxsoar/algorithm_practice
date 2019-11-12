#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    struct Node{
        int time;
        int id1, id2;
        bool friend operator < (Node a,Node b) {
            return a.time < b.time;
        }
    }e[10010];
    int fa[10010];
    int get(int x) {
        if(x == fa[x]) return x;
        return fa[x] = get(fa[x]);
    }
    void join(int x, int y) {
        int fx = get(x), fy = get(y);
        fa[fx] = fy;
    }
    bool check(int n) {
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(fa[i] == i) ans++;
        }
        if(ans == 1) return true;
        else return false;
    }
    int earliestAcq(vector<vector<int>> &logs, int N) {
        for(int i = 0; i < logs.size(); i++) {
            e[i].time = logs[i][0];
            e[i].id1 = logs[i][1];
            e[i].id2 = logs[i][2];
        }
        sort(e, e + logs.size());
       // int ans = logs[0][0];
        for(int i = 0; i <= N; i++) fa[i] = i;
        for(int i = 0; i < logs.size(); i++) {
            join(e[i].id1,e[i].id2);
            if(check(N)) return e[i].time;
        }
        return -1;
    }
};

int main() {
    return 0;
}