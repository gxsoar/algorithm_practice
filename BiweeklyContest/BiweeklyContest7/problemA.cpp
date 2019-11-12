#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <cmath>

using namespace std;

class Solution {
   public:
    int calculateTime(string keyboard, string word) {
        map<char,int> count;
        int len = keyboard.size();
        for(int i = 0; i < len; i++) {
            count[keyboard[i]] = i;
        }
        int ans = count[word[0]];
        for(int j = 1; j < word.size(); j++){
            int temp = abs(count[word[j]] - count[word[j - 1]]);
            ans += temp;
        }
        return ans;
    }
};

int main() {
    return 0;
}