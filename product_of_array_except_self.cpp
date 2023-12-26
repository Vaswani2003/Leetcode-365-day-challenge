/*
238 - Product of array except self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Solution details: Time complexity = O(n), Space complexity = O(n)

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z_count = 0;
        int z_index = -1;
        int prod = 1;
        int i;
        int n = nums.size();

        for(i=0; i < n; i++){
            if (nums[i] == 0){
                z_count++ ;
                if (z_index == -1)  z_index = i;
            }
            if (z_count>1)  break;
        }

        if(z_count == 1) {
            nums[z_index] = 1;
            for(i=0; i< n;i++){
                prod *= nums[i];
            }
            vector<int> ans(n,0);
            ans[z_index] = prod;
            return ans;
        }
        else if(z_count == 0){
            for(i=0; i<n;i++){
                prod *= nums[i];
            }
            vector<int> ans;
            for(i=0; i<n;i++){
                ans.push_back(prod/nums[i]);
            }
            return ans;
        }
        vector<int> ans(n, 0);
        return ans;
    }
};
