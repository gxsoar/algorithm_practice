#include <iostream>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

class Solution{
public:
    bool canDivideIntoSubsequences(vector<int> &nums, int K){
        map<int,int> cnt;
        int calculate = 0;
        for(int i = 0; i < nums.size(); i++) {
            cnt[nums[i]]++;
            if(calculate < cnt[nums[i]]) calculate = cnt[nums[i]];
        }
        if(calculate * K <= nums.size()) return true;
        else return false;
    }
};

int main()
{
    return 0;
}