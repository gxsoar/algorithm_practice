#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <queue>

using namespace std;

class Solution {
   public:
    vector<int> countSteppingNumbers(int low, int high) {
        vector<int> ans;
        queue<int> q;
        for(int i = 1; i <= 9; i++) q.push(i);
        if(!low) ans.push_back(0);
        while(!q.empty()) {
            int t = q.front();
            q.pop();
            if(t >= low) ans.push_back(t);
            int k = t % 10;
            if(k && t * 10 + k - 1 <= high) q.push(t * 10 + k - 1);
            if(k <= 9 && t * 10 + k + 1 <= high) q.push(t * 10 + k + 1);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int low, high;
    cin >> low >> high;
    Solution e;
    vector<int> ans = e.countSteppingNumbers(low, high);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}