#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*
前序遍历和中序遍历还原二叉树
preorder = root + left + right;
inorder = left + root + right;
3 9     20 15 7
 */
class Solution
{
public:
    TreeNode *creatTree(vector<int>::iterator L1, vector<int>::iterator R1, vector<int>::iterator L2, vector<int>::iterator R2)
    {
        if (L1 == R1 || L2 == R2)
            return NULL;
        TreeNode *root = new TreeNode(*L1);
        auto pos = find(L2, R2, root->val); //在中序遍历查找根节点
        int len = pos - L2;
        root->left = creatTree(L1 + 1, L1 + len + 1, L2, L2 + len);
        root->right = creatTree(len + L1 + 1, R1, pos + 1, R2);
        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return creatTree(preorder.begin(), preorder.end(), inorder.begin(), inorder.end());
    }
};
int main() {

    return 0;
}