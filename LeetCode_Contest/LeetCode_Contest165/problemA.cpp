#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string tictactoe(vector<vector<int>>& moves) {
        int n = moves.size();
        char maze[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) maze[i][j] = 'S';
        }
        bool winA = false, winB = false;
        for (int i = 0; i < n; i++) {
            if (i & 1)
                maze[moves[i][0]][moves[i][1]] = 'O';
            else
                maze[moves[i][0]][moves[i][1]] = 'X';
        }
        for (int i = 0; i < 3; i++) {
            string ans = "";
            ans = ans + maze[i][0] + maze[i][1] + maze[i][2];
            if (ans == "OOO") {
                winB = true;
                break;
            } else if (ans == "XXX") {
                winA = true;
                break;
            } else
                continue;
        }
        if (winA && winB) return "Draw";
        if (winA)
            return "A";
        else if (winB)
            return "B";
        //按照列遍历一遍
        winA = winB = false;
        for (int i = 0; i < 3; i++) {
            string ans = "";
            ans = ans + maze[0][i] + maze[1][i] + maze[2][i];
            // cout << ans << endl;
            if (ans == "OOO") {
                winB = true;
                break;
            } else if (ans == "XXX") {
                winA = true;
                break;
            } else
                continue;
        }
        if (winA && winB) return "Draw";
        if (winA)
            return "A";
        else if (winB)
            return "B";
        //斜着在遍历一遍
        string ans = "";
        ans = ans + maze[0][0] + maze[1][1] + maze[2][2];
        if (ans == "OOO")
            return "B";
        else if (ans == "XXX")
            return "A";
        ans = "";
        ans = ans + maze[0][2] + maze[1][1] + maze[2][0];
        if (ans == "OOO")
            return "B";
        else if (ans == "XXX")
            return "A";
        if (n == 9) return "Draw";
        return "Pending";
    }
};

int main() {
    vector<vector<int>> v;
    for(int i = 0; i < 5; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(vector<int> {a, b});
    }
    Solution e;
    cout << e.tictactoe(v) << endl;
    return 0;
}