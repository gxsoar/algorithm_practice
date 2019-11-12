#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2,vector<int>& arr3) {
        vector<int> ans;
        map<int,int> cnt;
        for(int i = 0; i < arr1.size(); i++) cnt[arr1[i]]++;
        for(int i = 0; i < arr2.size(); i++) cnt[arr2[i]]++;
        for(int i = 0; i < arr3.size(); i++) cnt[arr3[i]]++;
        for(auto p = cnt.begin(); p != cnt.end(); p++) {
            if(p->second == 3) ans.push_back(p->first);
        }
        return ans;
    }
};

int main() { return 0; }