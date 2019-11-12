#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
   public:
    int f(string s) {
        char ch = s[0];
        for(int i = 1; i < s.size(); i++) {
            if(ch > s[i]) ch = s[i];
        }
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(ch == s[i]) ans ++;
        }
        return ans;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries,vector<string>& words) {
        vector<int> ans;
        for(int i = 0; i < queries.size(); i++) {
            int p = f(queries[i]);
            int sum = 0;
            for(int j = 0; j < words.size(); j++) {
                int q = f(words[j]);
                if(p < q) sum++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main() { return 0; }