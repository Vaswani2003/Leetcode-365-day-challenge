class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0, r = h.size() -1;
        int lm = h[l], rm = h[r];
        int cur = 0, water = 0;

        while(l<=r){
            if (lm < rm){
                cur = lm - h[l];
                if (cur<0)  lm = h[l];
                else    water+= cur;
                l++;
            }
            else{
                cur = rm-h[r];
                if (cur<0)  rm = h[r];
                else    water += cur;
                r--;
            }
        }
        return water;
    }
};
