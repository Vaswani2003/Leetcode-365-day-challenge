/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

// Solution runtime 2ms, Time completixty = O(n)

class Solution {
public:
    int reverse(int x) {
        int r = 0;
        int digit;

        while(x){
            digit = x%10;

            if ( r > INT_MAX/10 || (r == INT_MAX/10 && digit > INT_MAX%10)) 
                return 0;

            else if ( r < INT_MIN/10 || (r == INT_MIN/10 && digit < INT_MIN))
                return 0;

            r = r*10 + x%10;
            x/= 10;
        }
        return r;
    }
};
