class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int i, n = arr.size();
        int leftMaxs[n];
        int rightMins[n];
        
        leftMaxs[0] = arr[0];
        for(i=1;i<n;i++){
            leftMaxs[i] = max(leftMaxs[i-1], arr[i]);
        }
        rightMins[n-1] = arr[n-1];
        for(i=n-2;i>=0;i--){
            rightMins[i] = min(rightMins[i+1],arr[i]);
        } 

        int ans = 0;
        for(i=0;i<n-1;i++){
            if(leftMaxs[i] <= rightMins[i+1]){
                ans++;
            }
        }
        return ans+1;
    }
};
