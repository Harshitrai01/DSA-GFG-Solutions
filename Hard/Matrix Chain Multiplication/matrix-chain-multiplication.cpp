//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mChain(int i, int j, int arr[], vector<vector<int>>&dp){
        if(i==j) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        dp[i][j]=1e9;
        for(int k=i;k<j;k++){
            dp[i][j]=min(dp[i][j],mChain(i,k,arr,dp)+mChain(k+1,j,arr,dp)+arr[i-1]*arr[k]*arr[j]);
        }
        
        return dp[i][j];
    }

    int matrixMultiplication(int N, int arr[])
    {   
        vector<vector<int>>dp(N+1,vector<int>(N+1,-1));
        int i=1,j=N-1;
        return mChain(1,j,arr,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends