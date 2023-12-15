// Given an integer x, return true if x is a palindrome and false otherwise.
// Time completixty O(n) , runtime 7ms

class Solution {
public:
    bool isPalindrome(int x) {
        bool neg = (x<0)? true:false;
        if (neg){
            return false;
        }
        int r=0, temp = x;

        while(temp){
            if (r> INT_MAX/10 || r < INT_MIN/10)    return false;
            r = r*10 + temp%10;
            temp = temp/10;
        }
        bool ans = (r == x)? true: false;
        return ans;
        
    }
};
