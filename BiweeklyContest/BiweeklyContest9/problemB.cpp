#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
typedef pair<int, int> P;
int step[810][810];
class Solution {
   public:
    int minKnightMoves(int x, int y) {
        int stx = abs(x), sty = abs(y);
        queue<P> q;
        for (int i = -311; i <= 311; i++) {
            for (int j = -311; j <= 311; j++) step[i + 400][j + 400] = -1;
        }
        step[0 + 400][0 + 400] = 0;
        q.push({0, 0});
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            if (x == stx && y == sty) {
                return step[x + 400][y + 400];
            }
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (step[nx + 400][ny + 400] == -1) {
                    step[nx + 400][ny + 400] = step[x + 400][y + 400] + 1;
                    q.push({nx, ny});
                    if (nx == stx && ny == sty) return step[nx + 400][ny + 400];
                }
            }
        }
        return -1;
    }
};

int main() {
    int x,y;
    cin >> x >> y;
    Solution e;
    cout << e.minKnightMoves(x,y) << endl; 
    return 0; 
}