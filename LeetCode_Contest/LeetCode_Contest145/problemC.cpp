#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    int longestWPI(vector<int> &hours) {
        int n = hours.size();
        vector<int> sum(n + 1,0);
        for(int i = 0; i <= n - 1; i++) {
            sum[i + 1] = sum[i] + (hours[i] > 8 ? 1 : 0);
        }
        for(int k = n; k > 0; k--) {
            for(int i = n; i - k  >= 0; i--) {
                if(sum[i] - sum[i - k] > k / 2) return k;
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}