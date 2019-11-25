class Solution {
   public:
    vector<vector<string>> suggestedProducts(vector<string>& products,
                                             string searchWord) {
        // sort(products.begin(),products.end());
        multiset<string> s;
        multiset<string>::iterator ite;
        vector<vector<string>> ans;
        for (auto t : products) s.insert(t);
        for (int i = 0; i < searchWord.size(); i++) {
            for (ite = s.begin(); ite != s.end(); ite++) {
                string str = *ite;
                if (str[i] != searchWord[i]) s.erase(ite);
            }
            int cnt = 0;
            vector<string> ret;
            for (ite = s.begin(); ite != s.end() && cnt < 3; ite++) {
                ret.push_back(*ite);
                cnt++;
            }
            ans.push_back(ret);
        }
        return ans;
    }
};