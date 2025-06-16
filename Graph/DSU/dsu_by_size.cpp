#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
public:
    vector<int> parent, size;
    DisjointSet(int n){
        parent.resize(n+1), size.resize(n+1);
        for(int i=0; i <=n; i++)
            parent[i] = i;
    }

    int findParent(int node){
        if(parent[node] == node)
            return node;
        
        return parent[node] = findParent(parent[node]);
    }
    
    void unionBySize(int a, int b){
        a = findParent(a); // find node's parent
        b = findParent(b);

        if(a != b){
            // Union by size
            if(size[a] < size[b])
                swap(a,b);              // in all case we will merge small tree B to large tree A

            parent[b] =a; // assign b tree's parent to a tree's parent
            size[a] += size[b];
        }
    }
};