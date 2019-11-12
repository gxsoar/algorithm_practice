class Solution{
public:
    double myPow(double x,int n) {
        if(x == 1.000000 || x == -1.000000) {
            if(x == -1.0){
                if(n & 1) return -1.0;
                else return 1.0;
            } else return 1.0;
        }
        if(n == INT_MIN) return 0.0;
        double ans = 1.0;
        if(n < 0) {
            n *= -1;
            x = 1.0 / x;
            for(; n; n >>= 1) {
                if(n & 1) ans = ans * x;
                x = x * x;
            }
        }
        else {
            for(; n; n >>= 1) {
                if(n & 1) ans = ans * x;
                x = x * x;
            }
        }
        return ans;
    }
};