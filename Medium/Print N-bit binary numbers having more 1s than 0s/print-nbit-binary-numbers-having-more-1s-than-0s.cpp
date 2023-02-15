//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void solve(int one, int zero, string op, int n, vector<string> &ans){
        if(n==0){
            ans.push_back(op);
            return;
        }
        string op1=op;
        op1.push_back('1');
        solve(one+1,zero,op1,n-1,ans);
        
        if(one>zero){
            string op2=op;
            op2.push_back('0');
            solve(one,zero+1,op2,n-1,ans);
        }
        return;
    }    

	vector<string> NBitBinary(int N)
	{
	    int one=0;
	    int zero=0;
	    string op="";
	    vector<string>ans;
	    solve(one,zero,op,N,ans);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends