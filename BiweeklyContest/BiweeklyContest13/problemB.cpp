#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string findSmallestRegion(vector<vector<string>>& regions, string region1,string region2) {
        unordered_map<string, string> fa;
        for(auto r : regions) {
            for(int i = 1; i < r.size(); i++) {
                fa[r[i]] = r[0];
            }
        }
        unordered_set<string> anc1;
        while(fa.find(region1) != fa.end()) {
            anc1.insert(region1);
            region1 = fa[region1];
        }
        anc1.insert(region1);
        while(fa.find(region2) != fa.end()) {
            if(anc1.find(region2) != anc1.end())
                return region2;
            region2 = fa[region2];
        }
        return region2;
    }
};

int main() {
    return 0;
}