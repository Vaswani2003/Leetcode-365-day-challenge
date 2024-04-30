class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int fp = 1;
        sort(nums.begin(), nums.end());
        int i, n= nums.size();

        for(i=0;i<n; i++){
            if (nums[i] > 0 && nums[i] == fp){
                fp++;
            }
        }
        return fp;
    }
};
