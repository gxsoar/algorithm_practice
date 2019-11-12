#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fa[10010];
class Solution {
   public:
    int getFather(int x) {
        return fa[x] == x ? x : fa[x] = getFather(fa[x]);
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.size();
        for(int i = 0; i <= n + 1; i++) {
            fa[i] = i;
        }
        for(int i = 0; i < pairs.size(); i++) {
            int fx = pairs[i][0], fy = pairs[i][1];
            fa[getFather(fx)] = getFather(fy);
        }
        vector< vector<char> > v;
        for(int i = 0; i < n; i++) {
            v[getFather(i)].push_back(s[i]);
        }
        for(int i = 0; i < n; i++) {
            sort(v[i].begin(), v[i].end());
            reverse(v[i].begin(), v[i].end());
        }
        string ans = "";
        for(int i = 0; i < n; i++) {
            ans += v[getFather(i)].back();
            v[getFather(i)].pop_back();
        }
        return ans;
    }
};

int main() { return 0; }