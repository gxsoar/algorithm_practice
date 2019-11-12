#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

const int MAXN = 2e9;
vector<long long> a;
void DFS(long long now, long long pre) {
    if (now > MAXN) return;
    a.push_back(now);
    for (int i = 0; i <= 9; i++) {
        if (abs(i - pre) == 1) {
            DFS(now * 10 + i, i);
        }
    }
}
void init() {
    a.push_back(0);
    for (int i = 1; i <= 9; i++) {
        DFS(i, i);
    }
    sort(a.begin(), a.end());
}
class Solution {
   public:
    vector<int> countSteppingNumbers(int low, int high) {
        static bool flag = false;
        if(!flag) {
            flag = true;
            init();
        }
        auto p = lower_bound(a.begin(), a.end(), low);
        vector<int> ans;
        for(; p != a.end() && *p <= high; p++) {
            ans.push_back(*p);
        }
        return ans;
    }
};

int main() {
    int low, high;
    cin >> low >> high;
    Solution e;
    vector<int> ans;
    ans = e.countSteppingNumbers(low, high);
    for(auto p : ans)
        cout << p << endl;
    return 0;
}