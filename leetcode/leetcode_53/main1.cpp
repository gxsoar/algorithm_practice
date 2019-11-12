#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int n = nums.size();
        int answer = nums[0], sum = nums[0];
        for(int i = 1; i < n; i++) {
            sum = max(sum,0) + nums[i];
            answer = max(answer,sum);
        }
        return answer;
    }
};

int main() {
    Solution e;
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << e.maxSubArray(v) << endl;
    return 0;
}