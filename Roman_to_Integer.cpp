/*
Given a roman numeral, convert it to an integer.
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Solution details: Time complexity = O(n), Speed = 15ms
*/

class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> roman;
        int x = 0,val = 0, n = s.length();
        int y = x+1;

        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        while(x<n){
                if (roman[s[x]] >= roman[s[y]]){
                    val += roman[s[x]];
                    x++;
                    y++;
                }
                else{
                    val += roman[s[y]] - roman[s[x]];
                    x = y+1;
                    y = x+1;
                }
        }
        return val;
    }
};
