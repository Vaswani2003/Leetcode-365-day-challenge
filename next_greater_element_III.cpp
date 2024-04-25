class Solution {
public:
    int nextGreaterElement(int k) {
        if (k<= 9)  return -1;

        vector<int> digits;
        while(k>0){
            digits.push_back(k%10);
            k /= 10;
            }
        
        reverse(digits.begin(), digits.end());

        int n = digits.size();
        int r = n-2;

        while(r>=0){
            if(digits[r]<digits[r+1]){
                break;
            }
        r--;
        }

        if(r == -1) return -1;

        sort(digits.begin()+r+1, digits.end());

        for(int i = r+1; i < n;i++){
            if(digits[i]>digits[r]){
                swap(digits[i],digits[r]);
                break;
            }
        }

        long long e = 1;
        long long ans = 0;

        for(int i = n-1;i>=0;i--){
            ans = ans + e*digits[i];
            e = e*10;
        }
        if(ans>INT_MAX){return -1;}
        
        return ans;
        
    }
};
