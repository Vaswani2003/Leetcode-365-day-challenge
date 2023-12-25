/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Solution details : Time complexity = O(n); runtime = 84ms;


*/

class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int  l =0, r = n-1;

        int max_vol = INT_MIN;
        int area;
        while(l<r){
            area = (r-l) * min(h[l],h[r]);
            max_vol = max(area, max_vol);

            if(h[l]>h[r])   r--;
            else    l++;
        }
        return max_vol;
    }
};
