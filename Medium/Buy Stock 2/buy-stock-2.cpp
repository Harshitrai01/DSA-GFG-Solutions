//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&arr, int n) {
        arr.push_back(-1);
        vector<vector<long long>>ans;
        vector<long long>temp;
        
        bool flag=true;
        for(int i=1;i<n+1;i++){
            if(arr[i-1]<=arr[i]){
                if(flag)
                temp.push_back(i-1);
                flag=false;
            }
            else{
                temp.push_back(i-1);
                if(temp.size()==2)
                ans.push_back(temp);
                temp.clear();
                flag=true;
            }
        }
        long long res=0;
        for(int i=0;i<ans.size();i++){
            res+=(arr[ans[i][1]]-arr[ans[i][0]]);
        }
        return res;
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