/* https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1  */


//Solution:

 bool dfs(int src, int dest, vector<int>& vis, vector<int>adj[]){
        if(src == dest){
            return true;
        }
        vis[src] = 1;
        for(int i : adj[src]){
            if(!vis[i]){
                if(dfs(i,dest,vis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
    
    int isBridge(int V, vector<int> arr[], int c, int d) 
    {
        // Code here
        vector<int>adj[V];
        for(int i=0; i<V; i++){
            for(auto j : arr[i]){
                if((i == c and j == d) or (i == d or j == c)){
                    continue;
                }
                else{
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(V,0);
        if(dfs(c,d,vis,adj)){
            return 0;
        }
        return 1;
    }
