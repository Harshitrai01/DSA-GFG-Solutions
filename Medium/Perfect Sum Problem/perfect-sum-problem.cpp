//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
	int CountSubsetSum(int arr[], int n, int sum, vector<vector<int>> &dp){
	    if(dp[n][sum]!=-1) return dp[n][sum];
	    if(n==0){
	        if(sum==0) return 1;
	        else return 0;
	    }
	    else if(arr[n-1]>sum)
	        return dp[n][sum]=CountSubsetSum(arr,n-1,sum,dp)%mod;
	    else
	        return dp[n][sum]=(CountSubsetSum(arr,n-1,sum-arr[n-1],dp)+CountSubsetSum(arr,n-1,sum,dp))%mod;
	    
	}
	
	int perfectSum(int arr[], int n, int sum)
	{      vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
           return CountSubsetSum(arr,n,sum,dp)%mod;
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