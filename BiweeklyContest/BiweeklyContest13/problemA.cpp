#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string encode(int num) {
<<<<<<< HEAD
        string ans;
        num++;
        while (num) {
            ans += to_string(num & 1);
            num >>= 1;
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
=======
        if(num == 0) return "";
        if(num == 1) return "0";
        if(num == 2) return "1";
        
>>>>>>> 4932d38a9fe55a79233a312c4e3c6d21cec2e913
    }
};

int main() {
<<<<<<< HEAD
=======
    int n;
    cin >> n;
    char s[1110];
    itoa(n,s,2);
    printf("%s\n",s);
>>>>>>> 4932d38a9fe55a79233a312c4e3c6d21cec2e913
    return 0;
}