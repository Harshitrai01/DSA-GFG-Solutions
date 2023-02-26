//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    int solve(int n, vector<vector<int>>& triangle, int i, int j, vector<vector<int>>&dp){
        if(i==n-1){
            return triangle[i][j];
        }
        else if(dp[i][j]!=-1) return dp[i][j];
        else{
            int d=triangle[i][j]+solve(n,triangle,i+1,j,dp);
            int dg=triangle[i][j]+solve(n,triangle,i+1,j+1,dp);
            return dp[i][j]=min(d,dg);
        }
    }
  
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(n,triangle,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends