//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        arr.push_back(-1);
        vector<vector<int>>ans;
        vector<int>temp;
        
        bool flag=true;
        for(int i=1;i<n+1;i++){
            if(arr[i-1]<=arr[i]){
                if(flag)
                temp.push_back(i-1);
                flag=false;
            }
            else{
                temp.push_back(i-1);
                if(temp.size()==2)
                ans.push_back(temp);
                temp.clear();
                flag=true;
            }
        }
        // for(int i=0;i<ans.size();i++){
        //     for(int j=0;j<ans[0].size();j++){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        // // for(int i=0;i<temp.size();i++)
        // //     cout<<temp[i]<<" ";
        return ans;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends