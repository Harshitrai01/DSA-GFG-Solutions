//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string>words={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void solve(vector<string>& ans, int n, string op, int iter, int a[]){
        if(n==0){
            ans.push_back(op);
            return;
        }
        
        for(int i=0;i<words[a[iter]].size();i++){
            char ch=words[a[iter]][i];
            op.push_back(ch);
            solve(ans,n-1,op,iter+1,a);
            op.pop_back();
        }
        
        return;
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>ans;
        string op="";
        solve(ans,N,op,0,a);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends