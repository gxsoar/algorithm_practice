class Solution {
   public:
    bool check(int x) {
        string s = to_string(x);
        for (auto ch : s) {
            if (ch == '0') return false;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int i = n - 1; i >= 1; i--) {
            if (check(i) && check(n - i)) {
                ans.push_back(n - i);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};