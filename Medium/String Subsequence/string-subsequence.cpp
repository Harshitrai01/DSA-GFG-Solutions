//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countWays(string S, string T){
        int mod=1e9+7;
        int n=S.size(),m=T.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else{
                    if(S[i-1]==T[j-1]){
                        dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
                    }
                    else
                        dp[i][j]=dp[i-1][j]%mod;
                }
            }
        }
        return dp[n][m]%mod;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}
// } Driver Code Ends