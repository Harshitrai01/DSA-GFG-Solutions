//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        int dp[n+2][2];
        for(int i=n+1;i>=0;i--){
            for(int buy=0;buy<2;buy++){
                    if(i>=n)
                        dp[i][buy]=0;
                    else{
                        if(buy){
                            int Buy=-prices[i]+dp[i+1][0];
                            int NotBuy=0+dp[i+1][1];
                            dp[i][buy]=max(Buy,NotBuy);
                        }
                        else{
                            int Sell=prices[i]+dp[i+2][1];
                            int NotSell=0+dp[i+1][0];
                            dp[i][buy]=max(Sell,NotSell);
                        }
                    }
            }
        }
        return dp[0][1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends