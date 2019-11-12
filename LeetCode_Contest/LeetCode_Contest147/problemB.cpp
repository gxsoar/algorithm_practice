#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string alphabetBoardPath(string target) {
        int x = 0, y = 0;
        int len = target.size();
        string ans = "";
        for(int i = 0; i < len; i++) {
            int id = target[i] - 'a';
            int nx = id / 5, ny = id % 5;
            while(x > nx) { 
                --x; 
                ans +="U";
            }
            while (y > ny) {
                --y;
                ans += "L";
            }
            while(x < nx) { 
                ++x; 
                ans += "D"; 
            }
            while(y < ny) { 
                ++y; 
                ans += "R";
            }
            ans += "!";
        }
        return ans;
    }
};

int main() {
    Solution e;
    string t;
    cin >> t;
    cout << e.alphabetBoardPath(t) << endl;
    return 0;
}