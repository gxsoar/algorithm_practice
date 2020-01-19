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
    int sum = 0;
    void Calculate(TreeNode* root, int parent, int grandParent) {
        if (grandParent % 2 == 0) sum += root->val;
        if (root->left) Calculate(root->left, root->val, parent);
        if (root->right) Calculate(root->right, root->val, parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        Calculate(root, -1, -1);
        return sum;
    }
};