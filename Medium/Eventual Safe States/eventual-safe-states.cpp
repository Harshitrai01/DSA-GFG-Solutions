//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
//   Using BFS and topo;ogical sorting by reversing the edges.
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int>adjRev[V];
        int indeg[V]={0};
        for(int i=0;i<V;i++){
            // i->it;
            // it->i;Reversing the edges
            for(auto it:adj[i]){
                adjRev[it].push_back(i);
                indeg[i]++;
            }
        }
        
        queue<int>q;
        vector<int>safeNodes;
        for(int i=0;i<V;i++){
            if(indeg[i]==0)
                q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto x:adjRev[node]){
                indeg[x]--;
                if(indeg[x]==0)
                q.push(x);
            }
        }
        sort(safeNodes.begin(),safeNodes.end());
        return safeNodes;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends