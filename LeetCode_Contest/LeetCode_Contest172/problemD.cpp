#include <bits/stdc++.h>

using namespace std;

struct tap {
    int l, r, len;
} e[100010];
bool cmp1(tap a, tap b) {
    // if(a.l == b.l) return a.len > b.len;
    return a.l < b.l;
}
class Solution {
   public:
    int minTaps(int n, vector<int>& ranges) {
        int k = 0;
        for (int i = 0; i <= n; i++) {
            e[k].l = (i - ranges[i]) > 0 ? (i - ranges[i]) : 0;
            e[k++].r = i + ranges[i];
        }
        //先找出最近并且覆盖范围最远的水龙头
        sort(e, e + k, cmp1);
        if (e[0].l > 0) return -1;
        int pre = 0, next = 0, cnt = 0, p = 0;
        while (p <= n) {
            cnt++;
            next = pre;
            while (p <= n && e[p].l <= pre) {
                next = max(next, e[p].r);
                p++;
            }
            if (pre == next) return -1;
            if (next >= n) return cnt;
            pre = next;
        }
        return cnt;
    }
};

int main() {
    return 0;
}