#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <queue>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode *root) {
        queue<TreeNode*> q;
        string ans = "[";
        if(root == NULL) {
            ans += "]";
            return ans;
        }
        q.push(root);
        while(!q.empty()) {
            int len = q.size();
            for(int i = 0; i < len; i++) {
                TreeNode *temp = q.front(); q.pop();
                if(temp) {
                    ans += to_string(temp->val);
                    q.push(temp->left);
                    q.push(temp->right);
                }
                else ans += "null";
                ans += ",";
            }
        }
        int len = ans.size();
        int i;
        for(i = len - 1; i >= 0; i--) {
            if(ans[i] >= '0' && ans[i] <= '9') break;
        }
        ans = ans.substr(0,i + 1);
        ans +="]";
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data) {
        if(data == "[]") return NULL;
        int len = data.size();
        int i = 1;
        vector<TreeNode*> v;
        while(i < len) {
            int ret = 0;
            bool flag = false;
            if(data[i] == '-') {
                flag = true;
                i++;
            }
            if(data[i] >= '0' && data[i] <= '9') {
                while (data[i] >= '0' && data[i] <= '9') {
                    ret = ret * 10 + (data[i] - '0');
                    i++;
                }
                if(flag) ret *= -1;
                TreeNode *temp = new TreeNode(ret);
                v.push_back(temp);
            }
            else if(data[i] == 'n') {
                v.push_back(NULL);
                i += 4;
            }
            else i++;
        }
        TreeNode *root = v[0];
        TreeNode *temp;
        int j = 1;
        queue<TreeNode*> q;
        q.push(v[0]);
        while(!q.empty() && j < v.size()) {
            temp = q.front(); q.pop();
            temp->left = v[j];
            if(v[j]) q.push(v[j]);
            if(j + 1 < v.size()) {
                temp->right = v[j + 1];
                if(v[j + 1]) q.push(v[j + 1]);
            }
            j += 2;
        }
        return root;
    }
};

int main() {
    // string t = " ";
    // char c1 = ' ';
    // char c2 = 'a';
    // char c3 = ' ';
    // char c4 = 'b';
    // t += c2; t += c1; t += c4; t += c3;
    // cout << t << endl;
    return 0;
}