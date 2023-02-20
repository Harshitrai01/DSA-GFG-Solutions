//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int d_row[4]={-1,0,1,0};
    int d_col[4]={0,1,0,-1};
    void solve(vector<vector<int>>& image,int i,int j,int color,int m,int n,int initial){
        if(i<0 or j<0 or i>=m or j>=n or image[i][j]==color)
            return;
        if(image[i][j]==initial){
            image[i][j]=color;
            
            for(int k=0;k<4;k++){
                int n_row=i+d_row[k];
                int n_col=j+d_col[k];
                solve(image,n_row,n_col,color,m,n,initial);
            }
        }
        
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int initial=image[sr][sc];
        solve(image,sr,sc,color,m,n,initial);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends