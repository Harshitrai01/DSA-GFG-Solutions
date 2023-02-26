//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    //  int solve(vector<vector<int>>& obstacleGrid, int i, int j){
    //     if(i==0 or j==0)
    //         return 0;
    //     else if(obstacleGrid[i-1][j-1]==1)
    //         return 0;
    //     else if(i==1 and j==1)
    //         return 1;
    //     int left=solve(obstacleGrid,i,j-1);
    //     int up=solve(obstacleGrid,i-1,j);
    //     return left+up;
    // }
    
    int totalWays(int m, int n, vector<vector<int>>& obstacleGrid) {
        // return solve(obstacleGrid,m,n);
        int mod=1000000007;
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 or j==0)
                    dp[i][j]=0;
                else if(obstacleGrid[i-1][j-1]==1)
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends