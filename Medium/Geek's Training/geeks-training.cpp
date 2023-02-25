//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    // int solve(vector<vector<int>>& points, int day, int last, int mx, vector<vector<int>>dp){
    //     if(day==0){
    //         mx=INT_MIN;
    //         for(int i=0;i<=2;i++){
    //             if(i!=last){
    //                 mx=max(mx,points[0][i]);
    //             }
    //         }
    //         return mx;
    //     }
    //     if(dp[day][last]!=-1) return dp[day][last];
    //     mx=INT_MIN;
    //     for(int i=0;i<=2;i++){
    //         if(i!=last){
    //             int merit=points[day][i]+solve(points,day-1,i,mx,dp);
    //             mx=max(mx,merit);
    //         }
    //     }
    //     return dp[day][last]=mx;
    // }
  
    int maximumPoints(vector<vector<int>>& points, int n){
        int mx;
        int day=points.size();
        // vector<vector<int>>dp(day,vector<int>(4,-1));
        // return solve(points,day-1,3,mx,dp);
        
        vector<vector<int>>dp(day,vector<int>(4,0));
        
        for(int i=0;i<day;i++){
            for(int j=0;j<4;j++){
                if(i==0){
                    mx=INT_MIN;
                    for(int k=0;k<=2;k++){
                        if(k!=j){
                            mx=max(mx,points[0][k]);
                        }
                    }
                    dp[i][j]=mx;
                }
                else{
                    mx=INT_MIN;
                     for(int k=0;k<=2;k++){
                        if(k!=j){
                            int merit=points[i][k]+dp[i-1][k];
                            mx=max(mx,merit);
                        }
                    }
                    dp[i][j]=mx;                   
                }

            }
        }
        return dp[day-1][3];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends