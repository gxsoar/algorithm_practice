#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <set>
#include <map>

using namespace std;

int fa[100010];
class Solution {
   public:
    int get(int x) {
        return fa[x] == x ? x : fa[x] = get(fa[x]);
    }
    int findCircleNum(vector<vector<int>>& M) {
        int n = M[0].size();
        for(int i = 0; i <= n; i++)
            fa[i] = i;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(M[i][j] == 1 && fa[i] != fa[j] && i != j){
                    fa[get(fa[j])] = get(fa[i]);
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(fa[i] == i) ans++;
        }
        return ans;
    }
};

int main() {
    return 0;
}