#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minSteps(string s, string t) {
        int alp1[210], alp2[210];
        memset(alp1, 0, sizeof(alp1));
        memset(alp2, 0, sizeof(alp2));
        for (auto ch : s) alp1[ch]++;
        for (auto ch : t) alp2[ch]++;
        int sum = 0;
        bool vis[210];
        memset(vis, 0, sizeof(vis));
        for (auto ch : s) {
            if (!vis[ch] && (alp1[ch] - alp2[ch]) > 0) {
                sum += alp1[ch] - alp2[ch];
                vis[ch] = 1;
            }
        }
        return sum;
    }
};

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
