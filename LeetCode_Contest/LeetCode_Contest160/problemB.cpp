#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> circularPermutation(int n, int start) {
        int t;
        vector<int> ans;
        int l = 1 << n;
        int a[l];
        for (int i = 0; i < l; i++) {
            a[i] = i ^ (i >> 1);
            if (a[i] == start) {
                t = i;
            }
        }
        for (int j = 0; j < l; j++) {
            ans.push_back(a[(j + t) % l]);
        }
        return ans;
    }
};

int main() { 
    Solution e;
    int a, b;
    cin >> a >> b;
    cout << e.circularPermutation(a, b) << endl;
    return 0;
}

// 010 100 110 111 011 101 001 000
/*
0 000 ^ 000 000
1 001 ^ 000 001
2 010 ^ 001 011 
3 011 ^ 001 010
4 100 ^ 010 110
5 101 ^ 010 111
6 110 ^ 011 101
7 111 ^ 011 100 */
