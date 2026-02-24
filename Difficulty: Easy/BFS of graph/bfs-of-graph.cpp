class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        vector<bool>visited(n,false);
        queue<int>Q;
        vector<int>res;
        Q.push(0);
        visited[0]=true;
        while(!Q.empty()){
            int f=Q.front();
            Q.pop();
            res.push_back(f);
            visited[f]=true;
            for(auto x:adj[f]){
                if(!visited[x]){
                    Q.push(x);
                    visited[x]=true;
                }
            }
        }
        return res;
    }
};