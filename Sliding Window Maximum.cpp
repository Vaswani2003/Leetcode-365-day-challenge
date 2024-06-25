class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> heap;
        int i, n = nums.size();
        vector<int> ans;

        for(i=0;i<k;i++){
            heap.push({nums[i],i});    
        }

        ans.push_back(heap.top().first);

        for(i=k;i<n;i++){

            heap.push({nums[i], i});

            while (heap.top().second <= i - k){
                heap.pop();
            }

            ans.push_back(heap.top().first);
        }

        return ans;
    }
};
