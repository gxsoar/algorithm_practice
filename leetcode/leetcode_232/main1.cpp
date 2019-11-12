#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
#include <vector>

using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> st;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> temp;
        while(!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int d = st.top();
        st.pop();
        return d;
    }
    
    /** Get the front element. */
    int peek() {
        return st.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return st.empty();
    }
};

int main() {
    int x;
    cin >> x;
    MyQueue* obj = new MyQueue();
    obj->push(x);
    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();
    cout << param_2 << " " << param_3 << " " << param_4 << endl;
}
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */