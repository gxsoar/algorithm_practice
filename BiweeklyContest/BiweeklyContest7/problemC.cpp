#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class Solution {
   public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int, vector<int>, greater<int> > q;
        int ans = 0;
        int n = sticks.size();
        if(n == 1) return sticks[0];
       // sort(sticks.begin(), sticks.end());
        for(int i = 0; i < n; i++) {
            q.push(sticks[i]);
        }
        while(q.size() > 1) {
            int a = q.top(); q.pop();
            int b = q.top(); q.pop();
            int temp = a + b;
            q.push(temp);
            ans += temp;
        }
       //cout << q.size() << endl;
        return ans;
    }
};

int main() { return 0; }