#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class Solution {
   public:
    int maxNumberOfApples(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0, sum = 5000;
        for(int i = 0; i < n; i++) {
            if(sum >= arr[i]) {
                sum -= arr[i];
                ans++;
            }
            else break;
        }
        return ans;
    }
};

int main() {
    return 0;
}