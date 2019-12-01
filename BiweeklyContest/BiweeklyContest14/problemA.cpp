#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    string toHexspeak(string num) {
        long long n = 0;
        for (auto s : num) {
            n = n * 10 + (s - '0');
        }
        stringstream ss;
        ss << hex << n;
        // cout << ss.str() << endl;
        string s = ss.str();
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                s[i] = 'I';
            else if (s[i] == '0')
                s[i] = 'O';
            else
                s[i] -= 32;
        }
        // cout << s << endl;
        map<char, bool> m;
        m['A'] = m['B'] = m['C'] = m['D'] = m['E'] = m['F'] = m['I'] = m['O'] =
            true;
        for (auto st : s) {
            if (!m[st]) return "ERROR";
        }
        return s;
    }
};

int main() { return 0; }