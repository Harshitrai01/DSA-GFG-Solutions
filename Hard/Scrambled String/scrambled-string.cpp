//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    
    unordered_map<string,int>mp;
    bool solve(string s1, string s2){
        if(s1==s2) return true;
        int n=s1.length();
        string key=s1;
        key+=" ";
        key+=s2;
        if(mp.find(key)!=mp.end()) return mp[key];
        for(int i=1;i<n;i++){
            bool swap=solve(s1.substr(0,i),s2.substr(n-i,i)) and solve(s1.substr(i,n-i),s2.substr(0,n-i));
            bool n_swap=solve(s1.substr(0,i),s2.substr(0,i)) and solve(s1.substr(i,n-i),s2.substr(i,n-i));
            if(swap or n_swap){
                return mp[key]=true;
            }
        }
        return mp[key]=false;
    }
    
    bool isScramble(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;
        return solve(s1,s2);
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends