//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(vector<vector<int>>&ans,vector<int>&temp, vector<int> &arr, int target, int n )
    {
        if(target==0){
            ans.push_back(temp);
            return;
        }
        else if(n==arr.size() or target<0){
            return;
        }
        
        for(int i=n;i<arr.size();i++){
            // avoid picking up same elements, if it is greater and repeated
            // whatever you are picking first time, it is going to repeat
            if(i>n and arr[i]==arr[i-1]) continue;
            // if element is greater than target, you are not going to get anything 
            // on right side, because array is sorted
            if(arr[i]>target) break;
            temp.push_back(arr[i]);
            solve(ans,temp,arr,target-arr[i],i+1);
            temp.pop_back();
        }
        
    }
  
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>CombinationSum2(vector<int> &A, int n, int B) {
        sort(A.begin(),A.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,A,B,0);
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends