#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans = arr;
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        for (int i = 0; i < ans.size(); i++) {
            ans[i] =
                lower_bound(arr.begin(), arr.end(), ans[i]) - arr.begin() + 1;
        }
        return ans;
    }
};

int main() {
    return 0;
}