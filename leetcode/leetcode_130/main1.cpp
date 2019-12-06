#include <bits/stdc++.h>

using namespace std;

class Unionfind {
   public:
    Unionfind(int allNodes) {
        for (int i = 0; i < allNodes; i++) parent[i] = i;
    }
    int Find(int i) {
        if (parent[i] != i) return parent[i] = Find(parent[i]);
        return i;
    }
    void Union(int x, int y) {
        int fx = Find(x), fy = Find(y);
        if (fx != fy) {
            parent[fx] = fy;
        }
    }
    bool same(int x, int y) { return Find(x) == Find(y); }

   private:
    int parent[1000010];
};

class Solution {
   public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        int nr = board.size(), nc = board[0].size();
        Unionfind uf(nr * nc + 1);
        int node = nr * nc;
        for (int r = 0; r < nr; r++) {
            for (int c = 0; c < nc; c++) {
                if (board[r][c] == 'O') {
                    if (r == 0 || r == nr - 1 || c == 0 || c == nc - 1) {
                        uf.Union(r * nc + c, node);
                    } else {
                        if (r > 0 && board[r - 1][c] == 'O')
                            uf.Union(r * nc + c, (r - 1) * nc + c);
                        if (r + 1 < nr && board[r + 1][c] == 'O')
                            uf.Union(r * nc + c, (r + 1) * nc + c);
                        if (c > 0 && board[r][c - 1] == 'O')
                            uf.Union(r * nc + c, r * nc + c - 1);
                        if (c + 1 < nc && board[r][c + 1] == 'O')
                            uf.Union(r * nc + c, r * nc + c + 1);
                    }
                }
            }
        }
        for (int r = 0; r < nr; r++) {
            for (int c = 0; c < nc; c++) {
                if (uf.same(r * nc + c, node))
                    board[r][c] = 'O';
                else
                    board[r][c] = 'X';
            }
        }
    }
};

int main() {
    return 0;
}