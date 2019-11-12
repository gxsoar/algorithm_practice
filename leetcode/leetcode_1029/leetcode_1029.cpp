#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    vector<bool> prefixesDivBy5(vector<int> &A){
        vector<bool> ans;
        long long temp = 0;
        for(int i = 0; i < A.size(); i++) {
            temp = (temp << 1) + A[i];
            temp %= 5;
            if(temp == 0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// #define MOD 10000000009

// vector<bool> prefixesDivBy5(vector<int> &A)
// {
//     vector<bool> ans;
//     long long temp = 1;
//     A[0] *= temp;
//     if (A[0] % 5 == 0)
//         ans.push_back(true);
//     else
//         ans.push_back(false);
//     temp *= 2;
//     for (int i = 1; i < A.size(); i++)
//     {
//         A[i] = (A[i] + 2 * A[i - 1]) % MOD;
//         //temp = (temp * 2) % MOD;
//         if (A[i] % 5 == 0)
//             ans.push_back(true);
//         else
//             ans.push_back(false);
//     }
//     return ans;
// }
// int main() {
//     vector<int> a;
//     vector<bool> ans;
//     for(int i = 0; i < 3; i++){
//         int x;
//         cin >> x;
//         a.push_back(x);
//     }
//     ans = prefixesDivBy5(a);
//     for(int i = 0; i < 3; i++) {
//         cout << ans[i] << " " << a[i] << endl;
//     }
//     return 0;
// }