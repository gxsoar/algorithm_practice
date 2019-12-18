#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;
    bool friend operator<(point a, point b) {
        if (a.x == b.x) return a.y < b.y;
        return a.x < b.x;
    }
};
class Solution {
   public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        map<P, bool> vis;
        point e[10010];
        int k = 0;
        for (auto i : intervals) {
            e[k].x = i[0], e[k].y = i[1];
            k++;
            vis[make_pair(i[0], i[1])] = false;
        }
        sort(e, e + k);
        int ans = 0;
        for (int i = 0; i < k - 1; i++) {
            int l = e[i].x, r = e[i].y;
            if (vis[make_pair(l, r)]) continue;
            for (int j = i + 1; j < k; j++) {
                if (l <= e[j].x && r >= e[j].y) {
                    n--;
                    vis[make_pair(e[j].x, e[j].y)] = true;
                } else
                    break;
            }
        }
        return n;
    }
};

int main() { return 0; }