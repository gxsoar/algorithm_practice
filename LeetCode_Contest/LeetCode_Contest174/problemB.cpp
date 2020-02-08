#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.second > b.second; }
class Solution {
   public:
    vector<pair<int, int> > v;
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int, int> count;
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }
        map<int, int>::iterator ite;
        int k = 0;
        for (ite = count.begin(); ite != count.end(); ite++) {
            v.push_back(make_pair(ite->first, ite->second));
        }
        // cout << v[0].first << " " << v[0].second << endl;
        sort(v.begin(), v.end(), cmp);
        int cnt = 0, ans = 0, len = (n >> 1);
        for (int i = 0; i < v.size(); i++) {
            if (cnt >= len) break;
            cnt += v[i].second;
            ans++;
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
