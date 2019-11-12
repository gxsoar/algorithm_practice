#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class Solution {
   public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        map<int,int> count;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                count[mat[i][j]]++;
            }
        }
        int ans = INT_MAX;
        map<int,int> :: iterator ite;
        for(ite = count.begin(); ite != count.end(); ite++) {
            if(ite->second >= 4)
                ans = min(ans,ite->first);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};

int main() {
    return 0;
}