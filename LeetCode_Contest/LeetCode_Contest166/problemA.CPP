#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int subtractProductAndSum(int n) {
        int ans = 1, ans1 = 0;
        while (n) {
            ans *= n % 10;
            ans1 += n % 10;
            n /= 10;
        }
        return ans - ans1;
    }
};
int main() {
    
    return 0;
}