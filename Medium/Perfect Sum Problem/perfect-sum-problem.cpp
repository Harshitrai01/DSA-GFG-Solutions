//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
// 	int CountSubsetSum(int arr[], int n, int sum, vector<vector<int>> &dp){
// 	    if(dp[n][sum]!=-1) return dp[n][sum];
// 	    if(n==0){
// 	        if(sum==0) return 1;
// 	        else return 0;
// 	    }
// 	    else if(arr[n-1]>sum)
// 	        return dp[n][sum]=CountSubsetSum(arr,n-1,sum,dp)%mod;
// 	    else
// 	        return dp[n][sum]=(CountSubsetSum(arr,n-1,sum-arr[n-1],dp)+CountSubsetSum(arr,n-1,sum,dp))%mod;
	    
// 	}
	
	int perfectSum(int arr[], int n, int sum)
	{      vector<vector<int>>dp(n+1,vector<int>(sum+1));
	       for(int i=0;i<=n;i++){
	           for(int j=0;j<=sum;j++){
	               if(i==0){
	                   if(j==0) dp[i][j]=1;
	                   else dp[i][j]=0;
	               }
	               else if(arr[i-1]>j){
	                   dp[i][j]=dp[i-1][j]%mod;
	               }
	               else
	                dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;
	           }
	       }
           return dp[n][sum]%mod;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends