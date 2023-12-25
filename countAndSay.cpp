class Solution {
public:
    string countAndSay(int n) {
        if (n==1)   return "1";
        if (n==2)   return "11";

        string s = "11";
        int i, j, c;
        string temp;

        for(i=3; i<=n ;i++){
            c = 1;
            temp = "";
            s =s+ "$";

            for(j=1; j<s.length();j++){
                if(s[j] != s[j-1]){
                    temp = temp+ to_string(c) ;
                    temp = temp+ s[j-1];
                    c = 1;
                }
                else    c++;
            }

            s = temp;
        }
        return s;
    }
};
