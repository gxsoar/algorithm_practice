#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> sum(2 * n + 1, 0);
        for(int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + arr[i];
        }
        int ans = sum[0];
        for(int i = 0; i < n; i++) {
            for(int j = 1; j < n - i; j++) {
                ans = max(ans,sum[i + j] - sum[i]);
            }
        }
        return ans;
    }
};

int main() { return 0; }