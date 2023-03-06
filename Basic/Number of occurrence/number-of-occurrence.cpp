//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:	

	int first(int arr[], int n, int x){
        int low=0,high=n-1;
        while(low<=high){
            
            int mid=low+(high-low)/2;
            
            if(arr[mid]<x)
            low=mid+1;
            
            else if(arr[mid]>x)
            high=mid-1;
            
            else{
                if((mid==0) || arr[mid-1]!=arr[mid])
                return mid;
                else
                high=mid-1;
            }
        } return -1;
    }
        int last(int arr[], int n, int x){
        int low=0,high=n-1;
        while(low<=high){
            
            int mid=low+(high-low)/2;
            
            if(arr[mid]<x)
            low=mid+1;
            
            else if(arr[mid]>x)
            high=mid-1;
            
            else{
                if((mid==n-1) || arr[mid]!=arr[mid+1])
                return mid;
                else
                low=mid+1;
            }
        } return -1;
    }
	int count(int arr[], int n, int x) {
	    int f=first(arr,n,x);
        int l=last(arr,n,x);
        if(f==-1)
        return 0;
        else
        return l-f+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends