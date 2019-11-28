class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0)
            nums1 = nums2;
        else {
            int p1 = m, p2 = n;
            int len = nums1.size();
            while (p2 > 0) {
                if (nums1[p1 - 1] <= nums2[p2 - 1]) {
                    nums1.insert(nums1.begin() + p1, nums2[p2 - 1]);
                    p2--;
                } else {
                    p1--;
                }
                if (p1 == 0) {
                    nums1.insert(nums1.begin(), nums2[p2 - 1]);
                    p2--;
                    p1++;
                }
                if (nums1.size() > len) nums1.pop_back();
            }
        }
    }
};