//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	void solve(vector<vector<int>> &ans, vector<int>temp, int target, int n){
	    if(target==0){
	        ans.push_back(temp);
	        return;
	    }
	    
	    if(n<=0 or target<0)
	        return;
	    
	    temp.push_back(n);
	    solve(ans,temp,target-n,n);
	    temp.pop_back();
	    solve(ans,temp,target,n-1);
	    return;
	}
	
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        int target=n;
        solve(ans,temp,target,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends