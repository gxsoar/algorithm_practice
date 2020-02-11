#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    double angleClock(int hour, int minutes) {
        if (hour == 12) hour = 0;
        double t = 11 * minutes * 1.0 / 2 - hour * 5 * 6;
        return abs(min(abs(t), 360 - abs(t)));
    }
};

int main() { return 0; }