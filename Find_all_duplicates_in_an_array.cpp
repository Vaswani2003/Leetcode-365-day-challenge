/*

442. Find All Duplicates in an Array

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.

Solution Detail = Time complexity = O(n), Space Complexity = O(1)

*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;
        if(n == 0 || n==1)  return ans;

        int i;
        sort(nums.begin(), nums.end());

        for(i=1;i<n;i++){
            if(nums[i-1] == nums[i])    ans.push_back(nums[i]);
        }

        return ans;
        
    }
};
