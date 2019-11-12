#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int getBinary(vector<int> a) {
        int ans = 0;
        int temp = 1;
        for(int i = a.size() - 1; i >= 0; i--) {
            ans += a[i] * temp;
            temp *= -2;
        }
        return ans;
    }
    vector<int> Divide(int x) {
        vector<int> ans;
        while(x) {
            ans.push_back(x % -2);
            x /= -2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> addNegabinary(vector<int> &arr1, vector<int> &arr2){
        int x = getBinary(arr1), y = getBinary(arr2);
        x += y;
        return Divide(x);
    }
};

int main() {
    vector<int> a;
    for(int i = 0; i < 5; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    for(int i = 0; i < 3; i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    Solution e;
    cout << e.addNegabinary(a,b) << endl;
    return 0;
}