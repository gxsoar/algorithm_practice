#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() {}

    Node(int _val, Node *_left, Node *_right, Node *_next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
public:
    Node *connect(Node *root) {
        Node *last = root;
        while(last) {
            while(last && last->left == NULL && last->right == NULL)
                last = last->next;
            if(last == NULL) break;
            Node *temp = NULL;
            for(Node *i = last; i != NULL; i = i->next) {
                if(i->left) {
                    if(temp) temp->next = i->left;
                    temp = i->left;
                }
                if(i->right) {
                    if(temp) temp->next = i->right;
                    temp = i->right;
                }
            }
            last = last->left ? last->left : last->right;
        }
        return root;
    }
};

int main() {

    return 0;
}