//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    
    // int solve(vector<vector<int>> &colors, int n, int i, int j, vector<vector<int>>&dp){
    //     if(j<0 or j>=3) return 1e8;
    //     if(i==0) return colors[0][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int ans=1e8;
    //     for(int k=-2;k<=2;k++){
    //         if(k==0) continue;
    //         int val=colors[i][j]+solve(colors,n,i-1,j+k,dp);
    //         ans=min(ans,val);
    //         dp[i][j]=ans;
    //     }
    //     return dp[i][j];
    // }

    int minCost(vector<vector<int>> &colors, int n) {
        vector<vector<int>>dp(n,vector<int>(3));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=2;j++){
                if(i==0) dp[i][j]=colors[0][j];
                else{
                    int val=1e8;
                    for(int k=-2;k<=2;k++){
                        if(k==0) continue;
                        else if(j+k>=0 and j+k<3){
                            int var=colors[i][j]+dp[i-1][j+k];
                            val=min(val,var);
                            dp[i][j]=val;                            
                        }
                    }
                }
            }
        }
        
        int ans=INT_MAX;
        for(int j=0;j<=2;j++){
            ans=min(ans,dp[n-1][j]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends