//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
int solve(int i, int buy, int cap, int profit, int n, vector<int>price){
    if(i==n or cap==0)
        return 0;
    if(buy){
        int Buy=-price[i]+solve(i+1,0,cap,profit,n,price);
        int NotBuy=0+solve(i+1,1,cap,profit,n,price);
        profit=max(Buy,NotBuy);
    }
    else{
        int Sell=price[i]+solve(i+1,1,cap-1,profit,n,price);
        int NotSell=0+solve(i+1,0,cap,profit,n,price);
        profit=max(Sell,NotSell);   
    }
    return profit;
}
int maxProfit(vector<int>&price){
    int n=price.size();
    int profit=0;
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3)));
    for(int i=n;i>=0;i--){
        for(int buy=0;buy<2;buy++){
            for(int cap=0;cap<3;cap++){
                if(i==n or cap==0)
                    dp[i][buy][cap]=0;
                else if(buy){
                    int Buy=-price[i]+dp[i+1][0][cap];
                    int NotBuy=0+dp[i+1][1][cap];
                    dp[i][buy][cap]=max(Buy,NotBuy);  
                }
                else{
                    int Sell=price[i]+dp[i+1][1][cap-1];
                    int NotSell=0+dp[i+1][0][cap];
                    dp[i][buy][cap]=max(Sell,NotSell);  
                }
            }
        }
    }
    return dp[0][1][2];
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends