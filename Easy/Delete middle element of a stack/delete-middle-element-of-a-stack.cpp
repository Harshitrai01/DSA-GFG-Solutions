//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void solve(stack<int>&s,int mid){
        
        if(mid==1){
            s.pop();
            return;
        }
        
        int temp=s.top();
        s.pop();
        solve(s,mid-1);
        s.push(temp);
        return;
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(s.size()==0)
            return;
        int mid=(s.size()/2)+1;
        solve(s,mid);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends