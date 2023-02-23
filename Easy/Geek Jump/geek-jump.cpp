//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    // int solve(vector<int>& height, int n){
    //     if(n==1)
    //         return 0;
    //     if(n==2)
    //         return abs(height[n-1]-height[n-2]);
    //     int include=abs(height[n-1]-height[n-2])+solve(height,n-1);
    //     int exclude=abs(height[n-1]-height[n-3])+solve(height,n-2);
    //     return min(include,exclude);
    // }
  
    int minimumEnergy(vector<int>& height, int n) {
        int dp[n+1];
        dp[0]=0;
        dp[1]=0;
        if(n>=2)
        dp[2]=abs(height[1]-height[0]);
        for(int i=3;i<=n;i++){
            int include=abs(height[i-1]-height[i-2])+dp[i-1];
            int exclude=abs(height[i-1]-height[i-3])+dp[i-2];
            dp[i]=min(include,exclude);
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends