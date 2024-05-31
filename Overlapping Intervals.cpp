//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& ints) {
        vector<vector<int>> stack;
        int i,n=ints.size(), st = 0; 
        sort(ints.begin(), ints.end());
        
        stack.push_back(ints[0]);
        
        for(i=1;i<n;i++){
         
        if ((stack[st][0] <= ints[i][0]) && (ints[i][0] <= stack[st][1])){
            stack[st][1] = max(stack[st][1], ints[i][1]);
        }
        else{
            stack.push_back(ints[i]);
            st++;
        }
        }
        
        return stack;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
