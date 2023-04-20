//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(vector<int> adj[], vector<int>&vis, int s, int parent){
        queue<pair<int,int>>q;
        q.push({s,parent});
        vis[s]=1;
        while(!q.empty()){
            int u=q.front().first;
            int p=q.front().second;
            q.pop();
            for(auto x:adj[u]){
            if(!vis[x]){
                vis[x]=1;
                q.push({x,u});
            }
            else if(x!=p)
                return true;
            }            
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(adj,vis,i,-1)==true)
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends