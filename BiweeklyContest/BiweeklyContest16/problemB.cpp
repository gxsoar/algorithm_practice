#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int check(vector<int>& a, int x) {
        int sum = 0;
        for (auto i : a) {
            sum += min(i, x);
        }
        return sum;
    }
    int findBestValue(vector<int>& arr, int target) {
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        int l = 0, r = 1e5 + 10;
        while(l < r) {
            int mid = (l + r) >> 1;
            if (check(arr, mid) >= target) 
                r = mid;
            else l = mid + 1;
        }
        int t1 = check(arr, l - 1), t2 = check(arr, l);
        // cout << t1 << " " << t2 << endl;
        if(abs(t1 - target) <= abs(t2 - target)) return l - 1;
        // else if(abs(t1 - target) == abs(t2 - target)) return l - 1;
        return l;
    }
};

int main(int argc, const char** argv) {
    return 0;
}