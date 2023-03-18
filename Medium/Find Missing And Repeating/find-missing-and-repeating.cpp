//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        map<int,int>mp;
        int a,b;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2){
                b=arr[i];
                break;
            }
        }
        
        bool help[n+1]={false};
        for(int i=0;i<n;i++){
            help[arr[i]]=true;
        }
        
        for(int i=1;i<=n;i++){
            if(!help[i]){
                a=i;
                break;
            }
        }
        
        arr[0]=b;
        arr[1]=a;
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends