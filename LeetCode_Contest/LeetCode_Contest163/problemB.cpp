#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class FindElements {
    TreeNode *tree;
   public:
    FindElements(TreeNode* root) {
        tree = reBuild(root, 0);
    }
    TreeNode* reBuild(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;
        TreeNode* newNode = TreeNode(val);
        if(root->left) {
            newNode->left = reBuild(root->left, 2 * val + 1);
        }
        if(root->right) {
            newNode->right = reBuild(root->right, 2 * val + 2);
        }
        return newNode;
    }
    bool findTarget(TreeNode* root, int target) {
        if (root == nullptr) return false;
        if(root->val == target) return true;
        return findTarget(root->left, target) || findTarget(root->right, target);
    }
    bool find(int target) {
        return findTarget(tree, target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */

int main() { return 0; }