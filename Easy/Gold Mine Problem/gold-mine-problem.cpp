//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int solve(int i, int j, int n, int m, vector<vector<int>> &arr, vector<vector<int>>&dp){
        
        if(i<0 or j<0 or i==n or j==m)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];

        int d_up=arr[i][j]+solve(i-1,j+1,n,m,arr,dp);
        int d_down=arr[i][j]+solve(i+1,j+1,n,m,arr,dp);
        int right=arr[i][j]+solve(i,j+1,n,m,arr,dp);
        
        return dp[i][j]=max({d_up,d_down,right});
        
    }

    int maxGold(int n, int m, vector<vector<int>> M)
    {   
        vector<vector<int>>dp (52,vector<int>(52,-1));
        int ans=-1e9,j=0;
        for(int i=0;i<n;i++){
            ans=max(ans,solve(i,j,n,m,M,dp));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends