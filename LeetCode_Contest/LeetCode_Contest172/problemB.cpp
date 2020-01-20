#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<string> printVertically(string s) {
        vector<string> ans;
        int maxLength = 0;
        vector<string> temp;
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' || i == s.size() - 1) {
                if (i == s.size() - 1) str += s[i];
                int b = str.size();
                maxLength = max(maxLength, b);
                temp.push_back(str);
                str = "";
            } else
                str += s[i];
        }
        int k = 0;  //用于指向每个字符串的第几个字符
        while (k < maxLength) {
            string ss = "";
            int flag = 0;
            for (int p = 0; p < temp.size(); p++) {
                if ((k + 1) > temp[p].size()) {
                    flag++;
                } else {
                    if (temp[p][k] >= 'A' && temp[p][k] <= 'Z') {
                        while (flag-- > 0) {
                            // flag--;
                            ss += " ";
                        }
                        ss += temp[p][k];
                        flag = 0;
                    }
                }
            }
            // cout << ss << endl;
            k++;
            ans.push_back(ss);
        }
        return ans;
    }
};

int main() {
    return 0;
}