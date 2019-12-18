#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int findSpecialInteger(vector<int>& arr) {
        double n = double(arr.size()) / 4;
        // cout << n << endl;
        int ans;
        map<int, int> count;
        for (auto a : arr) {
            count[a]++;
            if (count[a] > n) {
                ans = a;
                break;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}