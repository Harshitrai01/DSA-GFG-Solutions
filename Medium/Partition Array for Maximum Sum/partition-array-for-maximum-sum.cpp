//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int solve(int i, int n, int k, vector<int> arr, vector<int>&dp){
        if(i==n) return 0;
        if(dp[i]!=-1) return dp[i];
        int len=0;
        int ans=0;
        int mx=-1e9;
        for(int j=i;j<min(n,i+k);j++){
            len++;
            mx=max(mx,arr[j]);
            int sum=len*mx+solve(j+1,n,k,arr,dp);
            ans=max(ans,sum);
        }
        return dp[i]=ans;
    }
    
    int solve(int n, int k, vector<int>& arr){
        vector<int>dp(n+1,-1);
        return solve(0,n,k,arr,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends