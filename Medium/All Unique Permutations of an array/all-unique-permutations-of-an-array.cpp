//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    set<vector<int>>s;
    
    void solve(vector<int>&temp, vector<bool>&vis, vector<int>arr, int n){
        if(temp.size()==n){
            s.insert(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                vis[i]=true;
                temp.push_back(arr[i]);
                solve(temp,vis,arr,n);
                temp.pop_back();
                vis[i]=false;
            }
        }
    }
    
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            vis[i]=true;
            temp.push_back(arr[i]);
            solve(temp,vis,arr,n);
            vis[i]=false;
            temp.pop_back();
        }
        for(auto x:s)
            ans.push_back(x);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends