#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution{
public:
    int findContentChildren(vector<int> &g, vector<int> &s){
        int len1 = g.size(), len2 = s.size();
        sort(g.begin(),g.end()); sort(s.begin(),s.end());
        int ans = 0;
        for(int i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0; i--) {
            if(g[i] <= s[j]) {
                j--;
                ans++;
            } else continue;
        }
        return ans;
    }
};

int main() {
    return 0;
}