#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int pos = 0;
        for (int i = 0; i < n - 1; i++) {
            if(pos > i) { arr[i] = arr[pos]; continue;}
            int maxx = -1;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > maxx) {
                    maxx = arr[j];
                    pos = j;
                }   
            }
            arr[i] = arr[pos];
        }
        arr[n - 1] = -1;
        return arr;
    }
};

int main(int argc, const char** argv) {
    return 0;
}