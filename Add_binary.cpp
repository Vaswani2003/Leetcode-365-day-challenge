/*

67. Add Binary
Given two binary strings a and b, return their sum as a binary string.

Solution details: Time complexity = O(n); runtime = 0ms, beats 100%
*/

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";

        int n = a.length();
        int m = b.length();
        int i, c=0;

        reverse(a.begin(), a.end());
        reverse(b.begin(),b.end());

        if (n>m)
            for(i=0; i<n-m;i++)
                b+='0';
          else
              for(i=0; i<m-n;i++)
                a+='0';
        i=0;
        while(i < max(m,n)){
            if(a[i] == '0' && b[i]=='0'){
                if(c){
                    ans += '1';
                    c = 0;
                }
                else    ans+= '0';
            }
            else if ( (a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0' ) ){
                ans += (c)? '0' : '1' ; 
            }
            else{
                ans += (c)? '1':'0';
                c = 1;
            }
            i++;
        }
        if(c)   ans += '1';

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
