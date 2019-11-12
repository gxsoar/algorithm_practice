#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <stack>
//#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool check(string s) {
        if(s.size() == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/'))
            return false;
        else return true;
    }
    int getNumber(string t) {
        int len = t.size();
        int number = 0;
        bool flag = true;
        if(t[0] == '-') flag = false;
        int i = 0;
        if(!flag) i++;
        for(; i < len; i++) {
            number = number * 10 + t[i] - '0';
        }
        if(flag) return number;
        else return -1 * number;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int len = tokens.size();
        for(int i = 0; i < len; i++) {
            if(check(tokens[i])) {
                int number = getNumber(tokens[i]);
                st.push(number);
            }
            else {
                if(st.size() >= 2) {
                    int a = st.top(); st.pop();
                    int b = st.top(); st.pop();
                    int c;
                    switch (tokens[i][0]){
                        case '+':
                            c = a + b; break;
                        case '-':
                            c = a - b; break;
                        case '*':
                            c = a * b; break;
                        case '/':
                            c = a / b; break;
                    }
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};