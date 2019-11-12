#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution{
public:
    int pivotIndex(vector<int> &nums){
        if(nums.size() == 0) return -1;
        if(nums.size() == 1) return 1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) 
            sum += nums[i];
        int temp = 0;
        for(int i = 0; i < nums.size(); i++) {
            if((temp * 2) + nums[i] == sum)
                return i;
            temp += nums[i];
        }
        return -1;
    }
};

int main() {
    vector<int> nums;
    Solution T;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << T.pivotIndex(nums) << endl;
    return 0;
}