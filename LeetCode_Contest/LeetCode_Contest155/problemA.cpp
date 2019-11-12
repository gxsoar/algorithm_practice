#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

class Solution {
   public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int temp = abs(arr[0] - arr[1]);
        vector< vector<int> > ans;
        vector<int> ans1;
        ans1.push_back(arr[0]); ans1.push_back(arr[1]);
        ans.push_back(ans1);
        ans1.clear();
        for(int i = 1; i < n - 1; i++) {
            if(abs(arr[i] - arr[i + 1]) < temp) {
                ans.clear();
                temp = abs(arr[i] - arr[i + 1]);
                ans1.push_back(arr[i]); ans1.push_back(arr[i + 1]);
                ans.push_back(ans1);
                ans1.clear();
                continue;
            }
            else if(abs(arr[i] - arr[i + 1]) == temp) {
                ans1.push_back(arr[i]); ans1.push_back(arr[i + 1]);
                ans.push_back(ans1);
                ans1.clear();
                continue;
            }
            else 
                continue;
        }
        return ans;
    }
};

int main() {
    return 0;
}