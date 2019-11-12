#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define INF 0x3f3f3f3f
class Solution {
   public:
    int tribonacci(int n) {
        vector<long long> f(n + 10,0);
        f[0] = 0; f[1] = 1; f[2] = 1;
        for(int i = 3; i <= n; i++) {
            f[i] = (f[i - 1] + f[i - 2] + f[i - 3]) % INF;
            //cout << f[i] << endl;
        }
        return f[n];
    }
};

int main() { return 0; }