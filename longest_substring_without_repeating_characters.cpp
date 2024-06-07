class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, n = s.length(), max_len = 0;
        unordered_set<char> char_set;

        while(r<n){
            if (char_set.count(s[r]) == 0){
                char_set.insert(s[r]);
                max_len = max(max_len, r-l+1);
                r++;
            }
            else{
                while(char_set.count(s[r])){
                    char_set.erase(s[l]);
                    l++;
                }
            }
        }
        return max_len;
    }
};
