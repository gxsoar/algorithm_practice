#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    struct Number{
        int val;
        int id;
        bool friend operator < (Number a, Number b) {
            return a.val > b.val;
        }
    }e[200010];
    int largestValsFromLabels(vector<int> &values, vector<int> &labels, int num_wanted, int use_limit){
        int len = values.size();
        map<int,int> count;
       // Number e; e = new Number[len + 10];
        for(int i = 0; i < len; i++) {
            e[i].val = values[i];
            e[i].id = labels[i];
        }
        sort(e, e + len);
        int cnt = 0, ans = 0;
        for(int i = 0; i < len; i++) {
            if(cnt >= num_wanted) break;
            if(count[e[i].id] < use_limit) {
                cnt++;
                ans += e[i].val;
                count[e[i].id]++;
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}