#include <bits/stdc++.h>
using namespace std;

// finding the in_time and and out_time of the particular node in DFS  
map<int, pair<int,int>> timee;
int t =0;

// label -> {in_time, out_time}

void dfs(int node, vector<int> adj[], int parent){
    
    // we are entring the node
    timee[node].first = t;
    t++;

    cout << node << endl;
    for(auto child : adj[node]){
        if(child == parent) continue;
        dfs(child, adj, node);
    }

    // we are exiting the node
    timee[node].second = t;
    t++;
}

void bfs(int root, vector<int> adj[]){
    queue<pair<int,int>> q;
    // {node, parent}

    q.push({root, 0});

    while(!q.empty()){
        int node = q.front().first;
        int par = q.front().second;
        q.pop();
        
        cout << node << " ";

        for(auto child : adj[node]){
            if(child == par) continue;
            q.push({child, node});
        }
    }
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

    // dfs(1, adj, 0);
    // bfs(1, adj);

    for(auto it : timee){
        cout << it.first << " -> " << it.second.first << " " << it.second.second << endl;
    }


    return 0;
}

/* 
    input:
        5
        1 2
        2 3
        1 4
        3 5 

    question 1:
        given q quries that
        check u is ancestor of v or not either v is decendant of u or not

        u -> 2 and v -> 5 true

                1
            2       4
        3
            5                           

    answer:  in_time_u < in_v < out_v < out_u



 */