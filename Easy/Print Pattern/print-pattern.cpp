//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int c=0;
    void solve(vector<int>&ans,int n,int orig){
        if(n>orig and c>0)
            return;
            
        ans.push_back(n);
        if(n>0 and c==0){
            solve(ans,n-5,orig);
        }
        else if(n<=orig){
            c++;
            solve(ans,n+5,orig);
        }
    }

    vector<int> pattern(int N){
        vector<int>ans;
        solve(ans,N,N);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends