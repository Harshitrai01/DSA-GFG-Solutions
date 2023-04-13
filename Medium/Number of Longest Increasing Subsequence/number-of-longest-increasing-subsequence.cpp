//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int NumberofLIS(int n, vector<int>&arr) {
        int lis[n],cnt[n];
        int mx=0;
        for(int i=0;i<n;i++){
            lis[i]=1;cnt[i]=1;
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i] and lis[j]+1>lis[i]){
                    lis[i]=lis[j]+1;
                    cnt[i]=cnt[j];
                }
                else if(arr[j]<arr[i] and lis[j]+1==lis[i]){
                    cnt[i]+=cnt[j];
                }
            }
            mx=max(mx,lis[i]);
        }
        
        int nos=0;
        for(int i=0;i<n;i++){
            if(lis[i]==mx)
                nos+=cnt[i];
        }
        return nos;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.NumberofLIS(n, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends