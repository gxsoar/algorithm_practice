#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cstring>

using namespace std;

class Solution{
public:
    bool isBoomerang(vector<vector<int> > &points){
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];
        if((x3 - x1) * (y2 - y1) == (x2 - x1) * (y3 - y1)) return false;
        else return true;
    }
};

int main() {
    Solution e;
    vector< vector<int> > v;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            int x,y;
            cin >> x >> y;
            v[i].push_back(x);v[i].push_back(y);
        }
    }
    if(e.isBoomerang(v)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}