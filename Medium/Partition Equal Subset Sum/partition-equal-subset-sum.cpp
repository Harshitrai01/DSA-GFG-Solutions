//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    bool isSubsetSum(int arr[], int n, long long sum){
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
        for(long long i=0;i<=n;i++){
            for(long long j=0;j<=sum;j++){
                if(j==0) dp[i][j]=true;
                else if(i==0) dp[i][j]=false;
                else if(arr[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j-arr[i-1]] or dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    
    int equalPartition(int N, int arr[])
    {
        long long sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        if(sum%2!=0)
            return false;
        else
            return isSubsetSum(arr,N,sum/2);

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends