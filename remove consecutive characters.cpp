//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans = "";
        int n = S.length();
        int i;
        vector<int> stack;
        
        stack.push_back(S[0]);
        int st = 0;
        
        for(i=1;i<n;i++){
            if (stack[st] != S[i]){
                stack.push_back(S[i]);
                st++;
            }
        }
        
        for(auto it: stack){
            ans += it;
        }
    
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends
