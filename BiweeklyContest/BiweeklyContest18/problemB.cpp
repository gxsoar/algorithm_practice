#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string breakPalindrome(string palindrome) {
        if (palindrome.size() == 1) return "";
        int n = palindrome.size(), cnt = 0;
        for (int i = 0; i < (n >> 1); i++) {
            if (palindrome[i] == 'a') {
                if (i == (n / 2 - 1)) {
                    palindrome[n - 1] = 'b';
                    break;
                }
                continue;
            } else {
                palindrome[i] = 'a';
                break;
            }
        }
        // if(cnt == (n >> 1)) return "";
        return palindrome;
    }
};

int main() {
    return 0;
}