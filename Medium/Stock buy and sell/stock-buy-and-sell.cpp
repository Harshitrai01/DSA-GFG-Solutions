//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
        vector<int> arr(price, price + n);
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
        if(ans.size()==0){
            cout<<"No Profit";
            cout<<endl;
            return;
        }
        for(int i=0;i<ans.size();i++){
            cout<<"(";
            for(int j=0;j<2;j++){
                cout<<ans[i][j];
                if(j!=1) cout<<" ";
            }
            cout<<") ";
        }
        cout<<endl;
}