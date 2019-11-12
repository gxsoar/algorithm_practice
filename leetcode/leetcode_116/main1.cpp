#include <iostream>
#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
public:
    void DFS(Node *root) {
        if(root == NULL) return ;
        if(root->left && root->right){
            root->left->next = root->right;
            if(root->next) root->right->next = root->next->left;
            else root->right->next = NULL;
        }
        DFS(root->left);
        DFS(root->right);
    }
    Node *connect(Node *root) {
        if(root == NULL) return root;
        root->next = NULL;
        DFS(root);
        return root;
    }
};

int main() {

    return 0;
}