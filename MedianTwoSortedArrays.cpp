class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1 = 0, p2 = 0, n = nums1.size(), m = nums2.size();

        int l = n + m;
        int med = l/2;
        int cnt = 0;

        int cur = -1, prev = -1;

        while (p1 < n && p2 < m && cnt <= med){
            prev = cur;
            if (nums1[p1] < nums2[p2]){
                cur = nums1[p1++];
            }
            else{
                cur = nums2[p2++];
            }
            cnt++;
        }

        while(cnt <= med && p1 < n){
            prev = cur;
            cur = nums1[p1++];
            cnt++;
        }

        while(cnt<=med && p2<m){
            prev = cur;
            cur = nums2[p2++];
            cnt++;
        }

        if(l%2==0){
            return (prev+cur)/2.0;
        }

        return (double)cur;
        
    }
};
