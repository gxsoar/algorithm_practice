#include <algorithm>
#include <iostream>

using namespace std;

class Solution{
public:
    string gcdOfStrings(string str1, string str2){
        int len1 = str1.length(), len2 = str2.length();
        for(int i = len2; i >= 1; i--) {
            string temp = str2.substr(0,i);
            if(len1 % i == 0 && len2 % i == 0) {
                string ans1 = "", ans2 = "";
                while (ans1 != str1 && ans1.length() <= str1.length())
                    ans1 += temp;
                while (ans2 != str2 && ans2.length() <= str2.length())
                    ans2 += temp;
                if (ans2 == str2 && ans1 == str1)
                    return temp;
            }
        }
        string ans = "";
        return ans;
    }
};

int main() {
    string s,t;
    cin >> s >> t;
    Solution e;
    cout << e.gcdOfStrings(s,t) << endl;
    return 0;
}
/*
TAUXXTAUXXTAUXXTAUXXTAUXX
TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX
*/