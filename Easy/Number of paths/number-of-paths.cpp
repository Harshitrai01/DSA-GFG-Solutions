//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
       vector<vector<int>>dp(m+1,vector<int>(n+1));
       for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==1 and j==1)
                    dp[i][j]=1;
                else if(i==0 or j==0)
                    dp[i][j]=0;
                else{
                    int left=dp[i][j-1];
                    int up=dp[i-1][j];
                    dp[i][j]=left+up;                    
                }
            }
        }
        return dp[m][n];
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends