//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int countSubset(vector<int>v,int sum){
        int n=v.size();
        int dp[n+1][sum+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    if(j==0) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                else if(v[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-v[i-1]];
            }
        }
        return dp[n][sum];
    }
  
    int findTargetSumWays(vector<int>&A ,int target) {
        int sum=accumulate(A.begin(),A.end(),0);
        
        if((sum+target)%2==1 or (sum<target))
            return 0;
    
        int s=(target+sum)/2;
        return countSubset(A,s);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends