#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int> &arr) {
        int len = arr.size();
        for(int i = 0; i < len; i++) {
            if(arr[i] == 0){
                arr.insert(arr.begin() + i, 0);
                i++;
            }
        }
        arr.erase(arr.begin() + len, arr.end());
    }
};

int main() {
    vector<int> v;
    Solution e;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    e.duplicateZeros(v);
    return 0;
}