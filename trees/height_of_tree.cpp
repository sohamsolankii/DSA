#include <bits/stdc++.h>
using namespace std;
int cnt =0;

void dfs(int node, vector<int> adj[], int parent, vector<int> &level, int l=0){

    // cout << node << endl;
    level[node] =l;

    for(auto child : adj[node]){
        if(child == parent) continue;
        dfs(child, adj, node, level, l+1);
    }
}

void bfs(int root, vector<int> adj[]){
    queue<pair<int,int>> q;

    q.push({root, 0});
    int level =0;

    while(!q.empty()){
        int k = q.size();

        for(int i=0; i <k ;i++){
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            
            // cout << node << " ";

            for(auto child : adj[node]){
                if(child == par) continue;
                q.push({child, node});
            }
        }
        level++;
    }

    cout << level << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> adj[n+1];

    for(int i=0; i < n-1; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> level(n+1, 0);


    // dfs(1, adj, 0, level);
 
    // int ans = 0;
    // for(int i=0; i <= n; i++)
    //     ans = max(ans, level[i]+1);
    // cout << ans << endl;

    bfs(1, adj);

    return 0;
}