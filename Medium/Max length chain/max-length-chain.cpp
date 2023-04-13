//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:

    bool static cmp( pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    
    int maxChainLen(struct val p[],int n){
         vector<pair<int,int>> v;
        for(int i=0; i<n; ++i) {
            v.push_back({p[i].first,p[i].second});
        }
        sort(v.begin(),v.end(),cmp);
        int ans=1,end=v[0].second;
        for(int i=1; i<n; ++i) {
            if(end<v[i].first) {
                ans++;
                end=v[i].second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends