#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int deleteTreeNodes(int nodes, vector<int>& parent, vector<int>& value) {
        int n = parent.size();
        vector<int> sum(n, 0), vis(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            sum[i] += value[i];
            if (parent[i] == -1) continue;
            sum[parent[i]] += sum[i];
        }
        int ans = n;
        for (int i = 0; i < n; i++) {
            if (sum[i] == 0 || (parent[i] != -1 && vis[parent[i]] == 1)) {
                ans--;
                vis[i] = 1;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}