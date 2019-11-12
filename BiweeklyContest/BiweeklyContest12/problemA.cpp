#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> transformArray(vector<int>& arr) {
        if(arr.size() <= 2) return arr;
        bool flag = false;
        while(!flag) {
            bool flag1 = true;
            vector<int> temp = arr;
            for(int i = 1; i < arr.size() - 1; i++) {
                if(arr[i] < temp[i - 1] && arr[i] < temp[i + 1]){
                    arr[i] += 1;
                    flag1 = false;
                }
                if(arr[i] > temp[i - 1] && arr[i] > temp[i + 1]) {
                    arr[i] -= 1;
                    flag1 = false;
                }
            }
            if(flag1) flag = true;
        }
        return arr;
    }
};

int main() {
    return 0;
}
/*
2 3 4 6
1 3 4 5 6
3 6 8 9 5 2 7 10

3 6 8 8 5 2 7 10
[2,1,2,1,1,2,2,1]

[2,2,2,1,1,2,2,1]

[2,2,1,1,1,2,2,1]

2 2 2
*/