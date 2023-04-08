//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool static comp(string &s1, string &s2){
        return s1.size()<s2.size();
    }
    bool check(string s1, string s2){
        int count=0,j=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[j]){
                count++;
            }
            else{
                j++;
            }
        }
        return (count==1);
    }
  
    int longestChain(int n, vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int lis[n],mx=-1;
        lis[0]=1;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(words[j].size()==words[i].size()-1 and lis[j]+1>lis[i]){
                    if(check(words[i],words[j])){
                        lis[i]=lis[j]+1;
                        mx=max(mx,lis[i]);
                    }
                }
            }
            mx=max(mx,lis[i]);
        }
        return mx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.longestChain(N, words) << "\n";
    }
    return 0;
}
// } Driver Code Ends