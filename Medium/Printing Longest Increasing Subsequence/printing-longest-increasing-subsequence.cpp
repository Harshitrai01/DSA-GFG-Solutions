//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
          int lis[n],hash[n];
          lis[0]=1;hash[0]=0;
          int lastIndex=0,maxi=-1;
          for(int i=1;i<n;i++){
              lis[i]=1;hash[i]=i;
              for(int j=0;j<i;j++){
                  if(arr[j]<arr[i]){
                      if(lis[j]+1>lis[i]){
                          lis[i]=lis[j]+1;
                          hash[i]=j;
                      }
                  }
              }
              if(lis[i]>maxi){
                  maxi=lis[i];
                  lastIndex=i;
              }
          }
          
          vector<int>temp;
          temp.push_back(arr[lastIndex]);
          while(hash[lastIndex]!=lastIndex){
              lastIndex=hash[lastIndex];
              temp.push_back(arr[lastIndex]);
          }
          reverse(temp.begin(),temp.end());
          return temp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends