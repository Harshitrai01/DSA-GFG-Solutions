//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     vector<int> longestIncreasingSubsequence(int n, vector<int> arr) {
          int lis[n],hash[n];
          lis[0]=1;hash[0]=0;
          int lastIndex=0,maxi=-1;
          for(int i=1;i<n;i++){
              lis[i]=1;hash[i]=i;
              for(int j=0;j<i;j++){
                  if(arr[i]%arr[j]==0){
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
    
    vector<int> LargestSubset(int n, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        return longestIncreasingSubsequence(n,arr);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        vector<int> res = obj.LargestSubset(n, arr);
        int isValidSeq = 1, sz = res.size();
        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if ((res[i] % res[j]) == 0 || (res[j] % res[i]) == 0)
                    continue;
                else {
                    isValidSeq = 0;
                    break;
                }
            }
        }
        cout << isValidSeq << " " << sz << endl;
    }
    return 0;
}
// } Driver Code Ends