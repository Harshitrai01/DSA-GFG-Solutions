//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int countPartitions(int n, int d, vector<int>& arr) {
        int mod=1e9+7;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i]%mod;
        }
        if(sum-d < 0 or ((d+sum) % 2)==1) return 0;
        int s1=(d+sum)/2;
        vector<vector<int>>dp(n+1,vector<int>(s1+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(i==0){
                    if(j==0) dp[i][j]=1;
                    else dp[i][j]=0;
                }
                else if(arr[i-1]>j)
                    dp[i][j]=dp[i-1][j]%mod;
                else
                    dp[i][j]=(dp[i-1][j]+dp[i-1][j-arr[i-1]])%mod;
            }
        }
        return dp[n][s1]%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends