#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 10;
class Leaderboard {
    int board[MAXN];
    multiset<int> s;
    multiset<int> :: iterator ite;
   public:
    Leaderboard() {
        memset(board, 0, sizeof(board));
        s.clear();
    }
    void addScore(int playerId, int score) {
       if(board[playerId]) s.erase(s.find(-board[playerId]));
       board[playerId] += score;
       s.insert(-board[playerId]);
    }

    int top(int K) {
        int sum = 0;
        for(ite = s.begin(); K--; ite++) 
            sum += *ite;
        return -sum;
    }

    void reset(int playerId) {
        s.erase(s.find(board[playerId]));
        board[playerId] = 0;
    }
};

int main() {
    return 0;
}