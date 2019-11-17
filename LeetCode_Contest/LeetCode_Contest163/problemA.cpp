#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        if(n * m == k) return grid;
        vector<int> v(n * m, 0);
        while(k > 0) {
            int p = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    v[p++] = grid[i][j];
                }
            }
            vector<int> v1(n * m, 0);
            int a = v[p - 1];
            for(int i = 1; i < p; i++) {
                v1[i] = v[i - 1];
            }
            v1[0] = a;
            int p1 = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    grid[i][j] = v1[p1++];
                }
            }
            k--;
        }
        return grid;
    }
};

int main() {
    
    return 0;
}
/*
1 2 3           9 1 2
4 5 6 --------> 3 4 5
7 8 9           6 7 8

1 2 3 4 5 6 7 8 9

9 1 2 3 4 5 6 7 8

1 
2
3
4
7
6
5
*/