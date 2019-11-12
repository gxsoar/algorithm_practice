class Solution {
public :
    string longestPalindrome(string s) {
        if(s.size() == 1) return s;
        string t = "$#";
        for(int i = 0; i < s.size(); i++) {
            t += s[i];
            t += "#";
        }
        vector<int> p(t.size(),0);
        int rescenter = 0,reslen = 0;
        int mx = 0,mid = 0;
        for(int i = 1; i < t.size(); i++) {
            p[i] = mx > i ? min(mx - i, p[2 * mid - i]) : 1;
            while(t[i - p[i]] == t[i + p[i]]) p[i]++;
            if(mx < i + p[i]){
                mx = i + p[i];
                mid = i;
            }
            if(reslen < p[i]) {
                reslen = p[i];
                rescenter = i;
            }
        }
        return s.substr((rescenter - reslen) / 2,reslen - 1);
    }
};