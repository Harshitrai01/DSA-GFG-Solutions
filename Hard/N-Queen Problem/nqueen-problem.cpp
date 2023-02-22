//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // 2nd attempt
    
    void addsolution(vector<vector<int>>&board,vector<vector<int>>&ans,int n){
        vector<int>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]==1)
                temp.push_back(j+1);
            }
        }
        ans.push_back(temp);
    }
    
    void solve(vector<vector<int>>&board,vector<vector<int>>&ans,vector<int>&lR,vector<int>&uD,vector<int>&lD,
                                                                                        int n, int col){
        if(col==n){
            addsolution(board,ans,n);
            return;
        }
        
        for(int row=0;row<n;row++){
            // Is safe Condition
            if(lR[row]==0 and lD[row+col]==0 and uD[n-1+col-row]==0){
                board[row][col]=1;
                lR[row]=1;
                lD[row+col]=1;
                uD[n-1+col-row]=1;
                
                solve(board,ans,lR,uD,lD,n,col+1);
                
                board[row][col]=0;
                lR[row]=0;
                lD[row+col]=0;
                uD[n-1+col-row]=0;
            }
        }
        
        
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<vector<int>>ans;
        vector<int>lR(n,0);
        vector<int>lD(2*n-1,0);
        vector<int>uD(2*n-1,0);
        solve(board,ans,lR,lD,uD,n,0);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends