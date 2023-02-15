//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    void solve(string s, string curr, int i, vector<string> &ans){
        if(i==s.length()){
            ans.push_back(curr);
            return;
        }
        solve(s,curr+' '+s[i],i+1,ans);
        solve(s,curr+s[i],i+1,ans);
        return;
    }

    vector<string> permutation(string s){
        vector<string>ans;
        int n=s.length();
        string curr="";
        curr.push_back(s[0]);
        int i=1;
        solve(s,curr,i,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends