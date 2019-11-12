#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2) {
        map<int,int> cnt;
        map<int,bool> vis;
        vector<int> ans, ans1;
        for(int i = 0; i < arr1.size(); i++) {
            cnt[arr1[i]]++;
            vis[arr1[i]] = true;
        }
        for(int i = 0; i < arr2.size(); i++) {
            vis[arr2[i]] = false;
            while((cnt[arr2[i]])--) {
                ans.push_back(arr2[i]);
            }
        }
        for(int i = 0; i < arr1.size(); i++) {
            if(vis[arr1[i]]) ans1.push_back(arr1[i]);
        }
        sort(ans1.begin(),ans1.end());
        for(int i = 0; i < ans1.size(); i++) ans.push_back(ans1[i]);
        return ans;
    }
};

int main() {

    return 0;
}