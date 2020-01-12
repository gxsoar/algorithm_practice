class Solution {
   public:
    int fa[100010];
    int get(int x) {
        if (x == fa[x]) return x;
        return fa[x] = get(fa[x]);
    }
    void merge(int x, int y) {
        int fx = get(x), fy = get(y);
        fa[fx] = fy;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        for (int i = 0; i <= n; i++) fa[i] = i;
        int cnt = 0;
        for (auto v : connections) {
            if (get(v[0]) == get(v[1])) {
                cnt++;
                continue;
            } else {
                merge(v[0], v[1]);
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (get(fa[i]) == i) cnt1++;
        }
        // cout << cnt << " " << cnt1 << endl;
        if (cnt1 == 1) return 0;
        if (cnt + 1 < cnt1) return -1;
        return cnt1 - 1;
    }
};