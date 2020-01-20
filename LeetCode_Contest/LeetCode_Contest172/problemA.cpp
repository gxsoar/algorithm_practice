#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int maximum69Number(int num) {
        string strNum = to_string(num);
        for (int i = 0; i < strNum.size(); i++) {
            if (strNum[i] == '6') {
                strNum[i] = '9';
                break;
            }
        }
        int ans = 0;
        for (auto ch : strNum) {
            ans = ans * 10 + (ch - '0');
        }
        return ans;
    }
};

int main() {
    return 0;
}