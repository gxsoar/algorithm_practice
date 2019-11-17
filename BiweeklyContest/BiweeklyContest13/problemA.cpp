#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string encode(int num) {
        if(num == 0) return "";
        if(num == 1) return "0";
        if(num == 2) return "1";
        
    }
};

int main() {
    int n;
    cin >> n;
    char s[1110];
    itoa(n,s,2);
    printf("%s\n",s);
    return 0;
}