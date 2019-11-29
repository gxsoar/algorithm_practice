#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int maxArea(vector<int>& height) {
        int index1 = 0, index2 = height.size() - 1;
        int maxAreas = 0;
        while (index1 < index2) {
            int temp = (index2 - index1) * min(height[index1], height[index2]);
            if (temp >= maxAreas) {
                maxAreas = temp;
            }
            if (height[index1] <= height[index2])
                index1++;
            else
                index2--;
        }
        return maxAreas;
    }
};

int main() {
    return 0;
}