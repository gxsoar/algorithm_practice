#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
   public:
    bool isArmstrong(int N) {
        int k = 0;
        int temp1 = N,temp2 = N;
        while(N) {
            N /= 10;
            k++;
        }
        int sum = 0;
        while(temp1) {
            int b = temp1 % 10;
            sum += pow(b,k);
            temp1 /= 10;
        }
        return (sum == temp2);
    }
};

int main() { return 0; }