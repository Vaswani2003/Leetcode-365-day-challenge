/*
70. Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Time complexity: O(n) , runtime 0ms
*/

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
      
        for(int i = 1; i < n+1; i++){
            if (i==1)   dp[i] += dp[i-1];
            else{
                dp[i] = dp[i-1]+dp[i-2];
            }
        }
        return dp[n];
    }
};
