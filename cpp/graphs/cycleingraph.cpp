//finding the cycle in the graph using the breadth first search 
class Solution {
  public:
  
  bool bfs(int start,vector<vector<int>>& adj,vector<bool>& visited)
  {
      queue<int>q;
      vector<int> parent(adj.size(), -1);
      
      
      
      visited[start] = true;
      q.push(start);
      parent[start] = -1;
      
      while(!q.empty())
      {
          int temp = q.front();
          q.pop();
          
          
          for(int nei : adj[temp])
          {
              if(!visited[nei])
              {
                  visited[nei] = true;
                  q.push(nei);
                  parent[nei] = temp;
              }
              else if(parent[temp] != nei)
             
              {
                  return true;
              }
          }
      }
      return false;
      
      
      
  }
    // Checks if an undirected graph contains a cycle.
    // Parameters:
    //   V     - number of vertices in the graph
    //   edges - adjacency list representing the edges of the graph
    // Returns:
    //   true if the graph contains a cycle, false otherwise
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        
        for(auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visited(V,false);
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(bfs(i,adj,visited))
                {
                    return true;
                }
                
            }
        }
        
        return false;
        
    }
};

// finding the cycle in the graph using the depth first search

class Solution {
  public:
  // creating the bool function that will find the depth first search for the graph and return true if there is any cycle exists
  bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visit,unordered_map<int,int> &parent)
  {
     visit[node] = true;
        
        for(int nei : adj[node])
        {
            if(!visit[nei])
            {
                parent[nei] = node;

                // if the node is not visited once then we need to store the parent 

                if(dfs(nei,adj,visit,parent) )
                {
                    return true;
                } // that is it call the same function again and again and find when the visit is true
            }
            else if(parent[node] != nei)
            {
                return true;//if parent node is not equal to the neighbour than return true
            }
        }
        return false;
    } 
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        // Code here
    vector<vector<int>>adj(V);
    for(auto e : edges)
    {
        int u = e[0];
        int v = e[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    
    vector<bool>visit(V,false);
    
    for(int i = 0; i < V; i++)
    {
        if(!visit[i])
        {
            unordered_map<int,int>parent;
            parent[i]  = -1;
            // detecting the cycle in the graph using the depth first search
            if(dfs(i,adj,visit,parent))
            {
                return true;
            }
        }
    }
    return false;
    }
};