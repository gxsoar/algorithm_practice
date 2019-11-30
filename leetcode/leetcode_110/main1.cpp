#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int d = abs(depth(root->right) - depth(root->left));
        return (d <= 1) && isBalanced(root->right) && isBalanced(root->left);
    }
    int depth(TreeNode* root) {
        if(root == nullptr) return 0;
        return max(depth(root->right), depth(root->left)) + 1;
    }
};

int main() {
    return 0;
}