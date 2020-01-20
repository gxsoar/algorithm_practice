#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
   public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == NULL) return NULL;
        if (root->left) root->left = removeLeafNodes(root->left, target);
        if (root->right) root->right = removeLeafNodes(root->right, target);
        if (root->right == NULL && root->left == NULL && root->val == target) {
            return NULL;
        }
        return root;
    }
};

int main() { return 0; }