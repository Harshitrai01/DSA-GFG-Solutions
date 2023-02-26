//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int m, int n, vector<vector<int>> &obstacleGrid) {
        int mod=1000000007;
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 or j==0)
                    dp[i][j]=0;
                else if(obstacleGrid[i-1][j-1]==0)
                    dp[i][j]=0;
                else if(i==1 and j==1)
                    dp[i][j]=1;
                else{
                    int left=dp[i][j-1];
                    int up=dp[i-1][j];
                    dp[i][j]=(left+up)%mod;                   
                }
            }
        }
        return dp[m][n]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends