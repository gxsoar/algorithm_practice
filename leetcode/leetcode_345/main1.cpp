#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string reverseVowels(string s) {
        map<char, bool> alp;
        alp['a'] = true;
        alp['e'] = true;
        alp['i'] = true;
        alp['o'] = true;
        alp['u'] = true;
        alp['A'] = alp['I'] = alp['E'] = alp['O'] = alp['U'] = true;
        int len = s.size();
        int index1 = 0, index2 = len - 1;
        while (index1 < index2) {
            if (alp[s[index1]]) {
                if (alp[s[index2]]) {
                    swap(s[index1], s[index2]);
                    index1++;
                    index2--;
                } else
                    index2--;
            } else
                index1++;
        }
        return s;
    }
};

int main() {
    return 0;
}