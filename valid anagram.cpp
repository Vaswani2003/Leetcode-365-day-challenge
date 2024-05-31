class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(auto it: s){
            if(isalnum(it)){
                ans += (tolower(it));
            }
        }
        string reversed_string = ans;
        reverse(reversed_string.begin(), reversed_string.end());
        return ans == reversed_string;
    }
};
