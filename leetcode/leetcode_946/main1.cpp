#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, index = 0;
        stack<int> st;
        while(i < pushed.size()) {
            if(pushed[i] == popped[index]) {
                i++;
                index++;
            }
            else if(!st.empty() && (st.top() == popped[index])) {
                index++;
                st.pop();
            } else {
                st.push(pushed[i]);
                i++;
            }
        }
        while(!st.empty() && index < popped.size()) {
            if(st.top() == popped[index]) {
                index++;
                st.pop();
            } else return false;
        }
        return st.empty();
    }
};

vector<int> pushed,popped;

int main() {
    Solution e;
    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x; pushed.push_back(x);
    }
    for(int i = 0; i < 5; i++) {
        int x; 
        cin >> x; popped.push_back(x);
    }
    if(e.validateStackSequences(pushed,popped)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}