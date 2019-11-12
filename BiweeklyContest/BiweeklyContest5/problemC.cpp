#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
   public:
    int fa[1000010];
    struct pos {
        int to, next, cost;
        bool friend operator<(pos a, pos b) { return a.cost > b.cost; }
    } e[1000010];
    int get(int x) {
        if(x == fa[x]) return fa[x];
        else return fa[x] = get(fa[x]);
    }
    int join(int x, int y) {
        int fx = get(x), fy = get(y);
        if(fx == fy) return 1;
        else {
            fa[fx] = fy;
            return 0;
        }
    }
    int minimumCost(int N, vector<vector<int>>& conections) {
        for(int i = 0; i <= N; i++) fa[i] = i;
        int len = conections.size();
        for(int i = 0; i < len; i++) {
            e[i].to = conections[i][0];
            e[i].next = conections[i][1];
            e[i].cost = conections[i][2];
        }
        sort(e,e + len);
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i < len; i++) {
            if(!join(e[i].to,e[i].next)) {
                cnt++;
                sum += e[i].cost;
            }
        }
        if(cnt == N - 1) return sum;
        else return -1;
    }
};

int main() { return 0; }