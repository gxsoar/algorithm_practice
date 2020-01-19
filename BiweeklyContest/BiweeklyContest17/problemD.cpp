class Solution {
public:
    int distinctEchoSubstrings(string text) {
        unordered_set<string_view> s;
        string_view textView(text);
        int n = text.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int len = j - i;
                if(j * 2 - i <= n && textView.substr(i, len) == textView.substr(j, len) &&                     !s.count(textView.substr(i, len))) {
                    ans++;
                    s.insert(textView.substr(i, len));
                }
            }
        }
        return ans;
    }
};