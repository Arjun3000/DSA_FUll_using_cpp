class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int v = adj.size();
        vector<int>bfsres;
        vector<int>visit(v,false);
        
        queue<int> q;
           q.push(0);
           
           visit[0] = true;
           
           while(!q.empty())
           {
               int node = q.front();
               q.pop();
               bfsres.push_back(node);
               for(int nei : adj[node])
               {
                   if(!visit[nei])
                   {
                       q.push(nei);
                       visit[nei] = true;
                   }
               }
           }
           return bfsres;
    }
};