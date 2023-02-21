//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arr[9]={1,2,3,4,5,6,7,8,9};
    void solve(vector<vector<int>>&ans,vector<int>&temp,int target, int n ,int K)
    {   
        if(temp.size()>K) return;
        
        if(target==0 and temp.size()==K){
            ans.push_back(temp);
            return;
        }
        else if(n==9 or target<0){
            return;
        }
            temp.push_back(arr[n]);
            solve(ans,temp,target-arr[n],n+1,K);
            temp.pop_back();
            solve(ans,temp,target,n+1,K);
        
    }
  
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>combinationSum2(int B, int K) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,B,0,K);
        return ans;
    }
    vector<vector<int>> combinationSum(int K, int N) {
        return combinationSum2(N,K);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends