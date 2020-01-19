class Solution {
   public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i += 2) {
            int a = nums[i];
            int b = nums[i + 1];
            for (int j = 0; j < a; j++) {
                ans.push_back(b);
            }
        }
        return ans;
    }
};