#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    double ans = 0.0;
    double averageSubtree(TreeNode  *root, int &allSize, double &maxAverage) {
        if(root == NULL) return 0;
        int leftSize = 0, rightSize = 0;
        double leftAverage, rightAverage;
        leftAverage = averageSubtree(root->left,leftSize,maxAverage);
        rightAverage = averageSubtree(root->right,rightSize,maxAverage);
        allSize = leftSize + rightSize + 1;
        double average = (leftAverage * leftSize + rightAverage * rightSize + root->val) / (double) allSize;
        if(average > maxAverage) {
            maxAverage = average;
        }
        return average;
    }
    double maximumAverageSubtree(TreeNode *root) {
        if(root == NULL) return 0.0;
        double ans = INT_MIN;
        int s = 0;
        averageSubtree(root,s,ans);
        return ans;
    }
};

int main()
{
    return 0;
}