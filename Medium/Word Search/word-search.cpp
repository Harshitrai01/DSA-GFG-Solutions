//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int d_row[4]={-1,1,0,0};
    int d_col[4]={0,0,-1,1};
    bool solve(vector<vector<char>>& board,string word,int i, int j,int s,int m, int n,
    vector<vector<bool>>&vis){
        
        if(i<0 or j<0 or i>=m or j>=n)
            return false;
            
        if(s==word.size())
            return true;
            
        if(board[i][j]==word[s] and !vis[i][j]){
            vis[i][j]=true;
            for(int k=0;k<4;k++){
                int n_row=i+d_row[k];
                int n_col=j+d_col[k];
                if(solve(board,word,n_row,n_col,s+1,m,n,vis))
                    return true;
            }
            vis[i][j]=false;
        }
            
        return false;
    }

    bool isWordExist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(solve(board,word,i,j,0,m,n,vis))
                        return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends