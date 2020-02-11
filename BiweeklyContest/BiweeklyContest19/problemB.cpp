#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        vector<long long> sum(n * 2, 0);
        sum[0] = 0;
        for (int i = 1; i <= n; i++) sum[i] += sum[i - 1] + arr[i - 1];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            double t = (sum[i + k] - sum[i]) * 1.0 / k;
            if (t >= threshold * 1.0) {
                // cout << i << endl;
                ans++;
            }
        }
        return ans;
    }
};

int main() {return 0;}