class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int, vector<int>, greater<int> > q;
        for (int i = 0; i < m; i++) {
            q.push(nums1[i]);
        }
        for (int j = 0; j < n; j++) {
            q.push(nums2[j]);
        }
        nums1.clear();
        while (!q.empty()) {
            nums1.push_back(q.top());
            q.pop();
        }
    }
};