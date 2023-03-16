//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
        bool solve(string s, string p, int n, int m){
        if(m==0){
            if(n==0) return true;
            return false;
        }
        else if(n==0){
            for(int i=0;i<m;i++){
                if(p[i]!='*') return false;
            }
            return true;
        }
        else if(s[n-1]==p[m-1] or p[m-1]=='?')
            return solve(s,p,n-1,m-1);
        else{
            if(p[m-1]=='*')
                return solve(s,p,n-1,m) or solve(s,p,n,m-1);
            else 
                return false;
        }
    }
    
    int wildCard(string p,string s)
    {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j==0){
                    if(i==0) dp[i][j]=true;
                    else dp[i][j]=false;
                }
                
                else if(i==0){
                    bool flag=true;
                    for(int k=0;k<j;k++){
                        if(p[k]!='*'){
                            flag=false;
                            break;
                        }
                    }
                    dp[i][j]=flag;
                }
                
                else if(s[i-1]==p[j-1] or p[j-1]=='?')
                    dp[i][j]=dp[i-1][j-1];
                    
                else{
                    if(p[j-1]=='*')
                        dp[i][j]=dp[i-1][j] or dp[i][j-1];
                    else 
                        dp[i][j]=false;
                } 
            }
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends