#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int sx = coordinates[0][0], sy = coordinates[0][1];
        set<double> s;
        for(int i = 1; i < coordinates.size(); i++) {
            if(coordinates[i][1] - sy == 0 || coordinates[i][0] - sx == 0)
                s.insert(0);
            else{
                double k = (double)(coordinates[i][1] - sy) / (coordinates[i][0] - sx);
                s.insert(k);
            }
        }
        if(s.size() == 1) return true;
        else return false;
    }
};

int main() {
    return 0;
}