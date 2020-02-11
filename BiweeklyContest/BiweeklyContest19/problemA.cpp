#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int numberOfSteps(int num) {
        int ans = 0;
        while (num) {
            if (num & 1)
                num--;
            else
                num /= 2;
            ans++;
        }
        return ans;
    }
};

int main() {return 0;}