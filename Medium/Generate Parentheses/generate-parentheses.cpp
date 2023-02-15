//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{   
    public:
    
    void solve(int number_open, int number_close, string op, vector<string> &ans){
        if(number_open==0 and number_close==0){
            ans.push_back(op);
            return;
        }
        if(number_open!=0){
            string op1=op;
            op1.push_back('(');
            solve(number_open-1,number_close,op1,ans);
        }
        if(number_close>number_open){
            string op2=op;
            op2.push_back(')');
            solve(number_open,number_close-1,op2,ans);
        }
        return ;
    }
    
    vector<string> AllParenthesis(int n) 
    {
        int number_open=n, number_close=n;
        string op="";
        vector<string>ans;
        solve(number_open,number_close,op,ans);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends