#include <iostream>
#include <vector>

using namespace std;

/* Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    bool flag = false;
    bool DFS(TreeNode *root,int tag,int sum) {
        if(root->val + sum == tag && !root->left && !root->right) return true;
        return DFS(root->left,tag,sum + root->val) || DFS(root->right,tag,sum + root->val);
    }
    bool hasPathSum(TreeNode *root, int sum) {
        if(root == NULL) return false;
        return DFS(root,sum,0);
    }
};

int main() {

    return 0;
}
