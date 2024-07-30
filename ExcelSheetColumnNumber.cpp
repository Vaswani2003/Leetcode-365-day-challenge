class Solution {

public:
    int titleToNumber(string col) {
        int n = col.length(), ans = 0, i;
        
        for(i=0;i<n;i++){
            ans += pow(26, n-i-1) * ((int)col[i] - (int)'A' + 1);
        }

        return ans;    
    }
};
