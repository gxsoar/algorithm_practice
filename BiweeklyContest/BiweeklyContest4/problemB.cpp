#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Solution {
public:
    string removeVowels(string S) {
        string ans = "";
        int len = S.size();
        for(int i = 0; i < S.size; i++) {
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
                continue;
            }
            else ans += S[i];
        }
        return ans;
    }
};

int main()
{
    return 0;
}