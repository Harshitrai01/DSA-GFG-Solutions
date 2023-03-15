//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int minCoins(int coin[], int n, int sum) 
    {
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    if(j%coin[0]==0)
                        dp[i][j]=j/coin[0];
                    else
                        dp[i][j]=1e9;
                }
                else if(coin[i-1]<=j){
                    int include=1+dp[i][j-coin[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=min(include,exclude);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int ans=dp[n][sum];
        if(ans==1e9) ans=-1;
        return ans; 
    }
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends