class Solution {
public :
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp1 = x, temp2 = 0;
        while(x) {
            temp2 = temp2 * 10 + x % 10;
            x /= 10;
        }
        return (temp1 == temp2);
    }
};