#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    static bool cmp(string a, string b) {
        if(a.length() < b.length())
            return true;
        else return false;
    }
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end(), cmp);
        int n = folder.size();
        vector<string> ans;
        int j;
        for(auto ch : folder) {
            if(ans.empty() || ans.back().size() >= ch.size()) {
                ans.push_back(ch);
                continue;
            }
            for(j = 0; j < ans.back().size(); j++) {
                if(ans.back()[j] != ch[j])
                    break;
            }
            if(j < ans.back().size() || ch[j] != '/')
                ans.push_back(ch);
        }
        return ans;
    }
};

int main() {
    return 0;
}