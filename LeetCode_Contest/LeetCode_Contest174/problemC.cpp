#include <iostream>

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
const long long mod = 1e9 + 7;
typedef long long ll;
class Solution {
   public:
    ll sum = 0, ans = 0;
    void dfsSum(TreeNode* root) {
        if (root == nullptr) return;
        sum += root->val;
        dfsSum(root->left);
        dfsSum(root->right);
    }
    ll dfsTree(TreeNode* root) {
        if (root == nullptr) return 0;
        ll ret = root->val;
        ret += dfsTree(root->left);
        ret += dfsTree(root->right);
        if (ans < ret * (sum - ret)) ans = ret * (sum - ret);
        return ret;
    }
    int maxProduct(TreeNode* root) {
        sum = ans = 0;
        dfsSum(root);
        dfsTree(root);
        return ans % mod;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
