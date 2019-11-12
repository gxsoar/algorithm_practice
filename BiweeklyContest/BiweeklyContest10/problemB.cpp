#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
   public:
   
    set<int> s;

    void DFS(TreeNode* root) {
        if(root == nullptr) return;
        DFS(root->left);
        DFS(root->right);
        s.insert(root->val);
    }

    bool findTarget(TreeNode* root, int x) {
        if(root == nullptr) return false;
        if(s.find(x - root->val) != s.end()) return true;
        return (findTarget(root->left,x) || findTarget(root->right,x));
    }

    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        s.clear();
        DFS(root1);
        return findTarget(root2,target);
    }
};

int main() {
    return 0;
}