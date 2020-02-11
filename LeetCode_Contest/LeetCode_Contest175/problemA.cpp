#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == 2 * arr[i] && i != j) {
                    // cout << arr[j] << " " << arr[i] << endl;
                    return true;
                }
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
