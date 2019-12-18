#include <bits/stdc++.h>

using namespace std;

class CombinationIterator {
   public:
    CombinationIterator(string characters, int combinationLength) {
        alp.clear();
        int len = characters.size();
        k = 0;
        permation("", combinationLength, characters, 0);
    }

    string next() {
        string ans = alp[k];
        k++;
        return ans;
    }

    bool hasNext() {
        if (k >= alp.size())
            return false;
        else
            return true;
    }
    void permation(string s, int len, string str, int p) {
        if (s.size() == len) {
            alp.push_back(s);
            return;
        }
        for (int i = p; i < str.size(); i++) {
            string lastStr = s;
            if (!vis[str[i]]) {
                vis[str[i]] = true;
                s += str[i];
                permation(s, len, str, i + 1);
                //回溯
                vis[str[i]] = false;
                s = lastStr;
            }
        }
    }

   private:
    vector<string> alp;
    map<char, bool> vis;
    int k;
};

int main() { return 0; }