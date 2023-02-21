//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    bool isPal(string s){
        int i=0,j=s.size()-1;
        if(j==-1) return false;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;j--;
        }
        return true;
    }
  
    void solve(vector<vector<string>>&ans,vector<string>&temp,string s,int index){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++){
            string op=s.substr(index,i-index+1);
            if(isPal(op)){
                temp.push_back(op);
                solve(ans,temp,s,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        vector<vector<string>>ans;
        vector<string>temp;
        solve(ans,temp,S,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends