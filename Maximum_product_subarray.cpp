class Solution {
public:
    int maxProduct(vector<int>& a) {
        int pref = 1, suf = 1, n = a.size(), msf = INT_MIN;
        for(int i = 0; i <n;i++){
            suf = (suf == 0)? 1: suf;
            pref = (pref == 0)? 1: pref;

            pref *= a[i];
            suf *= a[n-i-1];

            msf = max(msf, max(pref, suf) );
        } 
        return msf;
    }
};
