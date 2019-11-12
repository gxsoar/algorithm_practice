#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int twoSumLessThanK(vector<int> &A, int K) {
        sort(A.begin(),A.end());
        int ans = 0;
        for(int i = A.size() - 1; i >= 1; i--) {
            for(int j = i - 1; j >= 0; j--){
                if(A[i] + A[j] < K) ans = max(ans,A[i] + A[j]);
            }
        }
        if(ans < K && ans != 0) return ans;
        else return -1;
    }
};

int main() {
    return 0;
}