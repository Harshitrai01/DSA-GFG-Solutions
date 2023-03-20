//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPal(int i, int j, string s){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
    
    int palindromicPartition(string s)
    {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(isPal(i,j,s)){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=1e9;
                    for(int k=i;k<j;k++){
                        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends