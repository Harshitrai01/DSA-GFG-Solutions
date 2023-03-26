//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int subsequenceCount(string S, string T)
    {   
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

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends