#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size(), m = points[0].size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int a = abs(points[i + 1][0] - points[i][0]);
            int b = abs(points[i][1] - points[i + 1][1]);
            if (a == b)
                ans += a;
            else {
                ans += min(a, b);
                ans += abs(b - a);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}