#include <iostream>

using namespace std;

class Solution {
   public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        int a = tomatoSlices, b = cheeseSlices;
        int x = (a - 2 * b);
        int y = (4 * b - a);
        if (x % 2 == 0 && y % 2 == 0 && x >= 0 && y >= 0) {
            ans.push_back(x >> 1);
            ans.push_back(y >> 1);
        }
        return ans;
    }
};

int main() {
    return 0;
}