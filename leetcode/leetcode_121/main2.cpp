#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (n == 0)
            return 0;
        int minPrices = prices[0], maxProfit = 0;
        for(int i = 1; i < n; i++) {
            minPrices = min(minPrices,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minPrices);
        }
        return maxProfit;
    }
};

int main()
{

    return 0;
}