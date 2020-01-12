class Solution {
   public:
    string getBinary(int x) {
        string temp = "";
        while (x) {
            temp += to_string(x & 1);
            x = x >> 1;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    int minFlips(int a, int b, int c) {
        string Two_a = getBinary(a);
        string Two_b = getBinary(b);
        string Two_c = getBinary(c);
        int len = max(Two_c.size(), max(Two_a.size(), Two_b.size())) + 1;
        string t = "";
        for (int i = Two_a.size(); i < len; i++) {
            t += "0";
        }
        t += Two_a;
        Two_a = t;
        t = "";
        for (int i = Two_b.size(); i < len; i++) {
            t += "0";
        }
        t += Two_b;
        Two_b = t;
        t = "";
        for (int i = Two_c.size(); i < len; i++) {
            t += "0";
        }
        t += Two_c;
        Two_c = t;
        // cout << Two_a << " " << Two_b << " " << Two_c << endl;
        int ans = 0;

        for (int i = len - 1; i >= 0; i--) {
            if (Two_c[i] == '1') {
                if (Two_a[i] == '1' || Two_b[i] == '1') continue;
                ans++;
            } else {
                if (Two_a[i] == '0' && Two_b[i] == '0') continue;
                if (Two_a[i] == '1') ans++;
                if (Two_b[i] == '1') ans++;
                cout << ans << endl;
            }
        }
        return ans;
    }
};