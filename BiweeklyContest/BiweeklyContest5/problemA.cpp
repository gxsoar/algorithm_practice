#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
   public:
    int largestUniqueNumber(vector<int>& A) {
        map<int,int> cnt;
        int len = A.size();
        for(int i = 0; i < len; i++){
            cnt[A[i]]++;
        }
        int maxx = -1;
        for(int i = 0; i < len; i++) {
            if(cnt[A[i]] == 1) maxx = max(maxx,A[i]);
        }
        return  maxx;
    }
};

int main() { return 0; }