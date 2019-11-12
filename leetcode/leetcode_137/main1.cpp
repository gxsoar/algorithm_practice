#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
public:
    int singleNumber(vector<int> &nums){
        map<int,int> mp;
        if(nums.size() == 1) return nums[0];
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(mp[nums[i]] == 1) return nums[i];
        }
        return nums[0];
    }
};

int main() {
    vector<int> nums;
    for(int i = 0; i < 4; i++){
        int x; cin >> x;
        nums.push_back(x);
    }
    Solution t;
    cout << t.singleNumber(nums) << endl;
    return 0;
}
