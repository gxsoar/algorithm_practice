#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/* Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // int answer = 0;
    // void DFS(TreeNode *root,int depth) {
    //     if(root == NULL) return;
    //     if(root->right == NULL && root->left == NULL)
    //         answer = max(answer,depth);
    //     DFS(root->left,depth + 1);
    //     DFS(root->right,depth + 1);
    // }
    int maxDepth(TreeNode *root) {
        if(root == NULL) return 0;
        return max(maxDepth(root->right),maxDepth(root->left)) + 1;
    }
};

int main() {

    return 0;
}