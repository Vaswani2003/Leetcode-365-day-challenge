class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int maxVol = INT_MIN, vol, l = 0, r = n-1, w, h;

        while(l<r){
            w = r - l;
            h = min(a[r], a[l]);
            vol = w*h;

            maxVol = max(maxVol,vol);
            
            if (a[r] > a[l]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxVol;
    }
};
