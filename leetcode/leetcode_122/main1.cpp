#include <algorithm>
#include <vector>
#include <iostream>


using namespace std;

class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int i = 0;
        while(i < n - 1) {
            while(i < n - 1 && prices[i] >= prices[i + 1]) 
                i++;
            int valey = prices[i];
            while(i < n - 1 && prices[i] <= prices[i + 1])
                i++;
            int peak = prices[i];
            ans += peak - valey;
        }
        for(auto p : prices)
            cout << p << endl;
        return ans;
    }
};

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    Solution e;
    cout << e.maxProfit(v) << endl;
    //system pause;
    return 0;
}