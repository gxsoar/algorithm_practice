#include <bits/stdc++.h>

using namespace std;

class CustomFunction {
   public:
   // Returns f(x, y) for any given positive integers x and y.
    //Note that f(x, y) is increasing with respect to both x and y.
     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
    int f(int x, int y);
};

CustomFunction :: f(int x, int y) {
    return x + y;
}

class Solution {
   public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector< vector<int> > ans;
        vector<int> temp;
        int x, y;
        for(x = 1; x <= 1000; x++) {
            for(y = 1; y <= 1000; y++) {
                if(z == customfunction.f(x, y)) {
                    temp.clear();
                    temp.push_back(x);
                    temp.push_back(y);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};

int main() {
    int x, y;
    CustomFunction e;
    cin >> x >> y;
    cout << e.f(x, y) << endl;
    return 0;
}