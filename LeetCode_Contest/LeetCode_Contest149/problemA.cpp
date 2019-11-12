#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    bool checkyear(int n) {
        return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
    }
    int checkmonth(int n, bool flag) {
        if (n == 2) {
            if (flag)
                return 28;
            else
                return 29;
        }
        if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 ||
            n == 12) {
            return 31;
        }
        return 30;
    }
    int ordinalOfDate(string date) {
        int len = date.size();
        int year = 0, month = 0, day = 0;
        for (int i = 0; i < 4; i++) {
            year = year * 10 + date[i] - '0';
        }
        for (int i = 5; i <= 6; i++) {
            month = month * 10 + date[i] - '0';
        }
        for (int i = 8; i <= 9; i++) {
            day = day * 10 + date[i] - '0';
        }
        bool flag = true;
        if (checkyear(year)) flag = false;
        int sum = 0;
        for (int i = 1; i < month; i++) {
            sum += checkmonth(i, flag);
        }
        sum += day;
        return sum;
    }
};

int main() { return 0; }