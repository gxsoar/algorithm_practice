#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    int numEquivDominoPairs(vector<vector<int>> &dominoes)
    {
        int n = dominoes.size();
        map<vector<int>, int> vis;
        int ans = 0;
        for(auto i : dominoes) {
            sort(i.begin(),i.end());
            ans += vis[i];
            vis[i]++;
        }
        return ans;
    }
};

int main()
{

    return 0;
}