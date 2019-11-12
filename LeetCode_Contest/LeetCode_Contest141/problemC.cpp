#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int,int> P;
#define INF 0x3f3f3f3f
int d[110][110];
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid) {
        int n = grid.size();
        if(grid[0][0] || grid[n - 1][n - 1]) return -1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) d[i][j] = INF;
        }
        queue<P> q;
        P e;
        e.first = 0, e.second = 0;
        q.push(e);
        d[0][0] = 0;
        while(!q.empty()) {
            e = q.front(); q.pop();
            for(int dx = -1; dx <= 1; dx++) {
                for(int dy = -1; dy <= 1; dy++) {
                    P temp;
                    temp.first = e.first + dx; temp.second = e.second + dy;
                    if(temp.first >=0 && temp.first < n && temp.second >= 0 && 
                        temp.second < n && d[temp.first][temp.second] > d[e.first][e.second] + 1
                        grid[temp.first][temp.second] != 1){
                        d[temp.first][temp.second] = d[e.first][e.second] + 1;
                        q.push(temp);
                    }
                }
            }
        }
        if(d[n - 1][n - 1] == INF) return -1;
        else return d[n - 1][n - 1] + 1;
    }
};

int main() {
    
    return 0;
}