//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    // int solve(int arr[], int n){
    //     if(n==1)
    //         return arr[0];
    //     if(n==2)
    //         return max(arr[0],arr[1]);
    //     int inc=arr[n-1]+solve(arr,n-2);
    //     int exc=solve(arr,n-1);
    //     return max(inc,exc);
    // }
    
    int FindMaxSum(int arr[], int n)
    {
        int dp[n+1];
        dp[0]=0;
        dp[1]=arr[0];
        if(n>=2)
        dp[2]=max(arr[0],arr[1]);
        for(int i=3;i<=n;i++){
            int inc=arr[i-1]+dp[i-2];
            int exc=dp[i-1];
            dp[i]=max(inc,exc);
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends