#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    string findLastString(string s) {
        int n = s.size();
        string temp = "";
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ') break;
            temp += s[i];
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    string findFirstString(string t) {
        int n = t.size();
        string temp = "";
        for(int i = 0; i < n; i++) {
            if(t[i] == ' ') break;
            temp += t[i];
        }
        return temp;
    }
    vector<string> beforeAndAfterPuzzles(vector<string>& phrases) {
        vector<string> ans;
        set<string> hash;
        int n = phrases.size();
        for(int i = 0; i < n; i++) {
            string temp1 = findLastString(phrases[i]);
            for(int j = 0; j < n; j++) {
                if(j == i) continue;
                string temp2 = findFirstString(phrases[j]);
                if(temp1 == temp2) {
                    int len1 = temp2.size(), len2 = phrases[j].size();
                    string temp3 = phrases[j].substr(len1, len2 - len1);
                    temp3 = phrase[i] + temp3;
                    if(hash.insert(temp3).second) ans.push_back(temp3);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    return 0;
}