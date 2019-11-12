#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*中序序列和后序序列构建二叉树 */
class Solution{
public :
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return creatTree(0,inorder.size() - 1, 0, postorder.size() - 1,inorder,postorder);
    }
    TreeNode *creatTree(int L1, int R1,int L2, int R2,vector<int> &in, vector<int> post) {
        if(L1 > R1 || L2 > R2) return NULL;
        TreeNode *root = new TreeNode(post[R2]);
        int pos = L1;
        while(in[pos] != post[R2] && L1 <= R1) pos++;
       // int len = pos - L1;
        root->left = creatTree(L1,pos - 1,L2,L2 + pos - L1 - 1,in,post);
        root->right = creatTree(pos + 1,R1,L2 + pos - L1,R2 - 1,in,post);
        return root;
    }
    vector<int> ans;
    void DFS(TreeNode *root)
    {
        if (root == NULL)
            return;
        else
        {
            DFS(root->left);
            ans.push_back(root->val);
            DFS(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        DFS(root);
        return ans;
    }
};

// int postorder[10] = {18, 6, 21, 9, 15, 7, 20, 3};
// int inorder[10] = {18, 9, 6, 21, 3, 15, 20, 7};

// void buildTree(int L1,int R1,int L2, int R2) {
//     if(L2 > R2 || L1 > R1) return ;
//     cout << postorder[R2] << endl;
//     int pos = L1;
//     while(inorder[pos] != postorder[R2] && L1 <= R1) pos++;
//     int dis = R1 - pos;
//     //buildTree(pos + 1,R1, R2 - dis, R2 - 1);
//     buildTree(L1,pos - 1,L1,R2 - dis - 1);
// }

int main() {
    Solution test;
    vector<int> inorder; vector<int> postorder; vector<int> ans;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        inorder.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        postorder.push_back(x);
    }
    TreeNode *tree = test.buildTree(inorder,postorder);
    ans = test.inorderTraversal(tree);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}