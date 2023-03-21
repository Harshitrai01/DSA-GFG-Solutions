//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mod=1003;
    int solve(int i, int j, string s, int isTrue, vector<vector<vector<int>>>&dp){
        if(i>j) return 0;
        if(i==j){
            if(isTrue) return (s[i]=='T');
            else return (s[i]=='F');
        }
        if(dp[i][j][isTrue]!=-1) return dp[i][j][isTrue]%mod;
        int ans=0;
        for(int k=i+1;k<j;k+=2){
    
            int lT=solve(i,k-1,s,1,dp)%mod;
            int lF=solve(i,k-1,s,0,dp)%mod;
            int rT=solve(k+1,j,s,1,dp)%mod;
            int rF=solve(k+1,j,s,0,dp)%mod;
            
            if(s[k]=='&'){
                if(isTrue) ans+=((lT*rT)%mod)%mod;
                else ans+=((lT*rF)%mod+(lF*rT)%mod+(lF*rF)%mod)%mod;
            }
            if(s[k]=='|'){
                if(isTrue) ans+=((lT*rF)%mod+(lF*rT)%mod+(lT*rT)%mod)%mod;
                else ans+=((lF*rF)%mod)%mod;
            }
            if(s[k]=='^'){
                if(isTrue) ans+=((lT*rF)%mod+(lF*rT)%mod)%mod;
                else ans+=((lT*rT)%mod+(rF*lF)%mod)%mod;
            }
        }
        return dp[i][j][isTrue]=ans%mod;
    }
    
    int countWays(int N, string S){
        vector<vector<vector<int>>>dp(N+1,vector<vector<int>>(N+1,vector<int>(2,-1)));
        return solve(0,N-1,S,1,dp)%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends