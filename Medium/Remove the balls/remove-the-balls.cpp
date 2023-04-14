//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        
        int n=color.size();
        stack<pair<int,int>>s;
        s.push({color[0],radius[0]});

        for(int i=1;i<n;i++){
            pair<int,int>top={color[i],radius[i]};
            if(s.size()>=1 and s.top()==top){
                s.pop();
            }
            else{
                s.push(top);
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends