#include <cstdio>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
   public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string charset[numRows + 1];
        int lenth = s.size();
        for(int i = 0; i < numRows + 1; i++) charset[i] = "";
        bool flag = false;
        int now = 0;
        for(int i = 0; i < lenth; i++) {
            if(!flag) {
                charset[now++] += s[i];
                if(now == numRows) {
                    flag = true;
                    now--;
                    continue;
                }
            }
            else {
                charset[--now] += s[i];
                if(now == 0) {
                    flag = false;
                    now++;
                    continue;
                }
            }
        }
        string ans = "";
        for(int i = 0; i < numRows; i++) {
            ans += charset[i];
        }
        return ans;
    }
};

int main()  {
    Solution e;
    string t;
    int x;
    cin >> t >> x;
    cout << e.convert(t,x) << endl;
    return 0;
}

/*
abcdefghijklmnopqrstuv 5

0    8    17
a    i    r
b   hj   qs
c  g l  p t
d f  m o  u
e    n    v

aibhjcgldfmen

LEETCODEISHIRING
L  D  R
E OE II
EC IH N
T  S  G
LDR EOEII ECIHN TSG
*/