class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int curMax = nums[0];
        int ans = 0, n = nums.size();

        for(int i=0;i< n;i++){
            curMax = max(curMax,nums[i]);
            if (curMax==i){
                ans++;}
        }
        return ans;
    }
};
