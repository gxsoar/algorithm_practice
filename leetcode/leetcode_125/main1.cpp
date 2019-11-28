#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    bool isPalindrome(string s) {
        string ans = "";
        for (auto ch : s) {
            if (ch >= '0' && ch <= '9')
                ans += ch;
            else if (ch >= 'A' && ch <= 'Z')
                ans += (ch - 'A' + 'a');
            else if (ch >= 'a' && ch <= 'z')
                ans += ch;
        }
        int index1 = 0, index2 = ans.length() - 1;
        while (index1 <= index2) {
            if (ans[index1] != ans[index2]) return false;
            index1++;
            index2--;
        }
        return true;
    }
};

int main() { return 0; }