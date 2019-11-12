#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    string dayOfTheWeek(int day, int month, int year) {
        int weekDay = -1;
        if (1 == month || 2 == month) {
            month += 12;
            year--;
        }
        weekDay = (day + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 -
                    year / 100 + year / 400) %
                   7;
        switch (weekDay) {
            case 0:
                return "Sunday";
                break;
            case 1:
                return "Monday";
                break;
            case 2:
                return "Tuesday";
                break;
            case 3:
                return "Wednesday";
                break;
            case 4:
                return "Thursday";
                break;
            case 5:
                return "Friday";
                break;
            case 6:
                return "Saturday";
                break;
            default:
                return NULL;
                break;
        }

        return NULL;
    }
};

int main() { return 0; }