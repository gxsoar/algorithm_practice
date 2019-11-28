#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0, index2 = numbers.size() - 1;
        while (index1 <= index2) {
            if (numbers[index1] + numbers[index2] < target)
                index1++;
            else if (numbers[index1] + numbers[index2] > target)
                index2--;
            else
                break;
        }
        return vector<int>{index1 + 1, index2 + 1};
    }
};

int main() {
    return 0;
}