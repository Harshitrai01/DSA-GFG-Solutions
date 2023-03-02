//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum=accumulate(arr,arr+n,0);
	    int dp[n+1][sum+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            if(j==0) dp[i][j]=1;
	            else if(i==0) dp[i][j]=0;
	            else if(arr[i-1]>j)
	                dp[i][j]=dp[i-1][j];
	            else
	                dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]];
	        }
	    }
	    int mn=INT_MAX;
	    for(int j=0;j<=sum/2;j++){
	        if(dp[n][j]==1){
	            mn=min(mn,abs(sum-(2*j)));
	        }
	    }
	    return mn;
	}
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends