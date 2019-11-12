#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int getHeightestNode(TreeNode *root) {
        if(root == NULL) return 0;
        else return max(getHeightestNode(root->left),getHeightestNode(root->right)) + 1;
    }
    TreeNode *lcaDeepestLeaves(TreeNode *root) {
        if(root == NULL) return NULL;
        if(getHeightestNode(root->left) == getHeightestNode(root->right))
            return root;
        return getHeightestNode(root->left) > getHeightestNode(root->right) ?
                lcaDeepestLeaves(root->left) : lcaDeepestLeaves(root->right);
    }
};

int main()
{

    return 0;
}