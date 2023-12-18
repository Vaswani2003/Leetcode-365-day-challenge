/*
53. Maximum Subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Solution details : Time complexity O(n), runtime 91ms
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf = nums[0], cur = 0;
        for(int i = 0; i < nums.size(); i++){
            if (cur<0)
                cur=0;
            cur+=nums[i];
            msf = max(msf,cur);
        }
        return msf;
    }
};
