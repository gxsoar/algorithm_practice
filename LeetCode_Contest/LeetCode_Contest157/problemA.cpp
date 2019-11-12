#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
   public:
    int minCostToMoveChips(vector<int>& chips) {
        int n = chips.size();
        int ans = 0;
        for(auto x : chips) {
            ans += x & 1;
        }
        return min(ans, n - ans);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    Solution e;
    cout << e.minCostToMoveChips(a) << endl;
    return 0;
}