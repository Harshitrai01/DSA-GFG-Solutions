//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    
    int solve(int n, int k, vector<vector<int>>&dp){
        if(k==0 or k==1 or n==1)
            return k;
            
        if(dp[n][k]!=-1)
            return dp[n][k];
            
        dp[n][k]=INT_MAX;
        for(int i=1;i<=k;i++){
            dp[n][k]=min(dp[n][k],1+max(solve(n-1,i-1,dp),solve(n,k-i,dp)));
        }
        return dp[n][k];
    }
    
    int eggDrop(int n, int k) 
    {   
       vector<vector<int>>dp(202,vector<int>(202,-1));
       return solve(n, k, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends