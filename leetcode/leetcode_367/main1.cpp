#include <iostream>

using namespace std;

class Solution{
public:
    bool isPerfectSquare(int num){
        long long left = 0, right = num;
        while(left <= right) {
            long long mid = (left + right) >> 1;
            if(mid * mid > num) right = mid - 1;
            else if(mid * mid < num) left = mid + 1;
            else return true;
        }
        return false;
    }
};

int main() {
    int x;
   /* Solution t;
    cin >> x;
    if(t.isPerfectSquare(x)) cout << "yes" << endl;
    else cout << "no" << endl;*/
    cin >> x;
    cout << (x >> 1) << endl;
    return 0;
}