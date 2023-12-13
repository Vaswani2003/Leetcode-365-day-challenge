//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Time complexity O(n) 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ans;
        int i, n = nums.size();
        int comp;

        for(i=0; i< n; i++){
            comp = target-nums[i];

            if ( hash.count(comp) && hash[comp] != i ){
                ans.push_back(i);
                ans.push_back(hash[comp]);
                break;
            }
            else
                hash[nums[i]] = i;
        }

        return ans;
    }
};
