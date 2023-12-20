/*

121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Solution details : Time complexity = O(n) , runtime 97ms
*/

class Solution {
public:
    int maxProfit(vector<int>& p) {
    int maxP=0;
    int l=0, r=1;
    
    while(r<p.size()){
        if (p[l] < p[r]){
            maxP = max(maxP, p[r] - p[l]);
        }
        else    l=r;

        r++;
    }
    return maxP;
    }
};
