/*
3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest 
substring without repeating characters.

Solution Details : Time Complexity = O(n)
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chrSet;
        int l=0, max_len = 0, r=0;
        string cur_str = "";

        while(r<s.length()){
            if (chrSet.count(s[r]) != 0){
                while(chrSet.count(s[r])){
                    chrSet.erase(s[l]);
                    l++;
                }
            }
            else{
                chrSet.insert(s[r]);
                max_len = max(max_len, r-l +1);
                r++;
            }
        }
        return max_len;
    }
};
