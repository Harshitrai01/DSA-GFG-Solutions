//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
       vector<vector<long long int>>dp(m+1,vector<long long int>(n+1));
       long long int mod=1000000007;
       for(long long int i=0;i<=m;i++){
            for(long long int j=0;j<=n;j++){
                if(i==1 and j==1)
                    dp[i][j]=1;
                else if(i==0 or j==0)
                    dp[i][j]=0;
                else{
                    long long int left=dp[i][j-1]%mod;
                    long long int up=dp[i-1][j]%mod;
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
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends