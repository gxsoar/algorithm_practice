#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        stack<int> st;
        int n = s.size();
        vector<int> pos(n,0);
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else if(s[i] == ')') {
                if(!st.empty()) {
                    st.pop();
                }
                else pos[i] = 1;
            }
        }
        while(!st.empty()) {
            pos[st.top()] = 1;
            st.pop();
        }
        for(int i = 0; i < n; i++) {
            if(!pos[i]) ans += s[i];
        }
        return ans;
    }
};

int main() { 
    Solution e;
    string s;
    while(cin >> s) {
        cout << e.minRemoveToMakeValid(s) << endl;
    }
    return 0;
}