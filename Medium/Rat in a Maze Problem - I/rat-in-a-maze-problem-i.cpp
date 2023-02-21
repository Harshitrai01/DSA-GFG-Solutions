//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    int d_row[4]={1,0,0,-1};
    int d_col[4]={0,-1,1,0};
    string d_str="DLRU";
    void solve(vector<vector<int>> &m, int n, vector<string>&ans, string op, int i, int j, vector<vector<int>>&vis){
        if(i==n-1 and j==n-1 and m[i][j]==1){
            ans.push_back(op);
            return;
        }
        
        if(i<0 or j<0 or i>=n or j>=n or vis[i][j]==1)
            return ;
            
        for(int k=0;k<4;k++){
            if(m[i][j]==1 and vis[i][j]==0){
                vis[i][j]=1;
                op.push_back(d_str[k]);
                int n_row=i+d_row[k];
                int n_col=j+d_col[k];
                solve(m,n,ans,op,n_row,n_col,vis);
                op.pop_back();
                vis[i][j]=0;
            }
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        string op="";
        solve(m,n,ans,op,0,0,vis);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends