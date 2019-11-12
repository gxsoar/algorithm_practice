class Solution
{
  public:
    int reverse(int x)
    {
        if(x == 0) { return 0; }
        int ans = 0;
        while(x) {
            int b = x % 10;
            x /= 10;
            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && b > 7)) return 0;
            if(ans < INT_MIN / 10|| (ans == INT_MIN / 10 && b < -8)) return 0;
            ans = ans * 10 + b;
        }
        return ans;
    }
};