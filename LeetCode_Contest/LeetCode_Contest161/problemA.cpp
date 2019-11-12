#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int minimumSwap(string s1, string s2) {
        int cnt_x = 0, cnt_y = 0;
        for(auto ch : s1) {
            if(ch == 'x') cnt_x++;
            if(ch == 'y') cnt_y++;
        }
        for(auto ch1 : s2) {
            if(ch1 == 'x') cnt_x++;
            if(ch1 == 'y') cnt_y++;
        }
        if((cnt_x & 1) || (cnt_y & 1)) return -1;
        string diff_s1 = "", diff_s2 = "";
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) {
                diff_s1 += s1[i];
                diff_s2 += s2[i];
            }
        }
        int len = diff_s1.size();
        cnt_x = 0, cnt_y = 0;
        for(auto ch : diff_s1) {
            if(ch == 'x') cnt_x++;
            else cnt_y++;
        }
        return (cnt_x + 1) / 2 + (cnt_y + 1) / 2;
        //return cnt1 + cnt2;
    }
};

int main() {
    return 0;
}

/*

"xyxyy"
"xxyyy"

xyyxyy yyyxyy yx yxy y yy
yxxxxy xxxxxy yx xxx y xx 1

xxyyxyxyxx
xyyxyxxxyx

x y x y y x
y x y x x y

yx xy

3 * 2 

y y x y y x
y x y x x x

y x x y y x
y y y x x x

y y x y y x
y y x x x x

y y x y x x
y y x y x x

xyyxyxyxx
xyxxyxxyx

xyxxyxyxx
xyxyyxxyx

xyxyxxyxx
xyxyxxxyx

xyxyxx
*/