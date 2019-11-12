
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    int DFS(int num, int d, int f) {
        int sum = 0;
        if(d == 0) return sum;
        if(num == 1 || num == 0) return 1;
        for(int i = 1; i <= f; i++) {
            sum += DFS(num - i, d - 1, f);
        }
        return sum;
    }
    int numRollsToTarget(int d, int f, int target) {
        return DFS(target,d,f);
    }
};

int main() { return 0; }