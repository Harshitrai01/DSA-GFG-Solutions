//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void calculate_lis(vector<int>arr, vector<int>&lis, int n){
	    
	    lis[0]=1;
	    
	    for(int i=1;i<n;i++){
	        lis[i]=1;
	        for(int j=0; j<i;j++){
	            if(arr[j]<arr[i])
	                lis[i]=max(lis[i],lis[j]+1);
	        }
	    }
	    
	}
	
	void calculate_lds(vector<int>arr, vector<int>&lds, int n){
	    
	    lds[0]=1;
	    
	    for(int i=n-1;i>=0;i--){
	        lds[i]=1;
	        for(int j=n-1; j>i;j--){
	            if(arr[j]<arr[i])
	                lds[i]=max(lds[i],lds[j]+1);
	        }
	    }
	    
    }
	
	int LongestBitonicSequence(vector<int>arr)
	{
	    int n=arr.size();
	    
        vector<int> lis(n);
        vector<int> lds(n);
        
        calculate_lis(arr,lis,n);
        calculate_lds(arr,lds,n);
        
        int res=INT_MIN;
        for(int i=0;i<n;i++){
            res=max(res,lis[i]+lds[i]-1);
        }
        
        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends