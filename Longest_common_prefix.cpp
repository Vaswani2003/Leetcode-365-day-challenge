/*
14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "". 

Solution details: Time complexity = O(n^2) (Worse case)
Runtime = 3ms
  */ 

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i, j, n, l = strs.size();

        if (l == 0)   return ans;
        
        n = strs[0].length();

        for(i = 0; i < n; i++){
            for(j = 0; j < l; j++){
                if (strs[0][i] != strs[j][i])
                    break;
            }
            if (j == l)
                ans += strs[0][i];
            else
                break;
        }

        return ans;
    }
};

