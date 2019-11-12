#include <iostream>
#include <vector>

using namespace std;

//Definition for a binary tree node.
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};
/*
解法1：遍历从根节点到节点p，q的所有路径并用一个数组把他们存起来
然后遍历两个数组查找最近公共节点
 */
class Solution {
public:
    bool findPath(TreeNode *root, TreeNode *t, vector<TreeNode*> &v) {
        if(root == NULL) return false;
        if(root == t){
            v.push_back(root);
            return true;
        }
        if(findPath(root->left,t,v) || findPath(root->right,t,v)) {
            v.push_back(root);
            return true;
        }
        return false;
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if(p->val == q->val) return p;
        if(p->val == root->val || q->val == root->val) return root;
        vector<TreeNode*> vp; vector<TreeNode*> vq;
        findPath(root,p,vp); findPath(root,q,vq);
        int len1 = vp.size(), len2 = vq.size();
        while(len1 > 0 && len2 > 0 && vp[len1 - 1] == vq[len2 - 1]) {
            len1--;
            len2--;
        }
        return vp[len1];
    }
};

int main() {
    return 0;
}