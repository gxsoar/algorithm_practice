#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        vector<int> sum(len, 0);
        int d = 0;
        for(int i = 1; i < len; i++) {
            d = min(d, arr[i] - arr[i - 1]);
        }
        for(int i = 1; i < len; i++) {
            if(arr[i] - arr[i - 1] != d){
                return arr[i] - d;
            }
        }
    }
};

int main() {
    return 0;
}