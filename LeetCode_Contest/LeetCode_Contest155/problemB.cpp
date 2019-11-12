#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    int nthUglyNumber(int n, int a, int b, int c) {
        int cnt = 0;
        vector<int> t;
        t.push_back(a); t.push_back(b); t.push_back(c);
        sort(t.begin(), t.end());
        long long maxNum = 2e9 + 1;
        for(long long i = 1; i <= maxNum; i++) {
            
        }
    }
};

int main() { return 0; }