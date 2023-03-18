//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) {
        int dp[n+1][2][k+1];
        for(int i=n;i>=0;i--){
            for(int buy=0;buy<2;buy++){
                for(int cap=0;cap<=k;cap++){
                    if(i==n or cap==0)
                        dp[i][buy][cap]=0;
                    else{
                        if(buy){
                            int Buy=-prices[i]+dp[i+1][0][cap];
                            int NotBuy=0+dp[i+1][1][cap];
                            dp[i][buy][cap]=max(Buy,NotBuy);
                        }
                        else{
                            int Sell=prices[i]+dp[i+1][1][cap-1];
                            int NotSell=0+dp[i+1][0][cap];
                            dp[i][buy][cap]=max(Sell,NotSell);
                        }
                    }
                }
            }
        }
        return dp[0][1][k];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends