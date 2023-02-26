//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    // int solve(int a, int b, int i, int j){
    //     if(i=0 or j=0)
    //         return 0;
    //     if(i==1 and j==1)
    //         return 1;
    //     int left=solve(a,b,i,j-1);
    //     int up=solve(a,b,i-1,j);
    //     return right+down;
    // }
    int NumberOfPath(int a, int b)
    {   
        vector<vector<int>>dp(a+1,vector<int>(b+1,0));
        for(int i=0;i<=a;i++){
            for(int j=0;j<=b;j++){
                if(i==1 and j==1)
                    dp[i][j]=1;
                else if(i==0 or j==0)
                    dp[i][j]=0;
                else{
                    int left=dp[i][j-1];
                    int up=dp[i-1][j];
                    dp[i][j]=left+up;                    
                }
            }
        }
        return dp[a][b];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends