//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isSafe(int grid[][N], int row, int col, int k){
        
        for(int idx=0;idx<N;idx++){
            if(grid[row][idx]==k or grid[idx][col]==k)
                return false;
            if(grid[3*(row/3)+idx/3][3*(col/3)+idx%3]==k)
                return false;
        }
        return true;
    }
    
    
    bool solve(int grid[][N],int n){
        
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]==0)
                {
                    for(int k=1;k<=n;k++){
                        if(isSafe(grid,i,j,k)){
                            grid[i][j]=k;
                            if(solve(grid,N))
                                return true;
                            grid[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
            return true;

    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        if(solve(grid,N))
            return true;
        else
            return false;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends