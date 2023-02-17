//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    set<string>st;
	    void solve(string s, string op, vector<bool>vis){
	        if(op.size()==s.size()){
	            st.insert(op);
	            return;
	        }
	        for(int i=0;i<s.size();i++){
	            if(vis[i]==false){
	                vis[i]=true;
    	            op.push_back(s[i]);
    	            solve(s,op,vis);
    	            op.pop_back();
    	            vis[i]=false;
	            }
	        }
	        return;
	    }
	
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    vector<bool>vis(S.size(),false);
		    string op="";
		    for(int i=0;i<S.size();i++){
		        vis[i]=true;
		        op.push_back(S[i]);
		        solve(S,op,vis);
		        op.pop_back();
		        vis[i]=false;
		    }
		    for(auto x:st)
		        ans.push_back(x);
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends