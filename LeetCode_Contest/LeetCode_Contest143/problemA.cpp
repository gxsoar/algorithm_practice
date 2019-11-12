#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans;
        ans.resize(num_people,0);
        for(int i = 1; i <= candies; i++) {
            ans[(i - 1) % num_people] += min(i,candies);
            candies = max(0,candies - i);
        }
        return ans;
    }
};

int main() {
    Solution e;
    int a, b;
    cin >> a >> b;
    vector<int> ans = e.distributeCandies(a,b);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}