// Kruskal's Algorithm  --> For min spanning tree
// Link : https://www.codingninjas.com/codestudio/problems/minimum-spanning-tree_631769

#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<pair<int, int>>> adj;

    // Add Edge
    void addEdge(int u, int v, int weight){
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }

    void makeSet(vector<int> &parent, vector<int> &rank, int n){
        for(int i=0; i<n; i++){
            parent[i] = i;
            rank[i] = 0;
        }
    }

    // find parent function
    int findParent(vector<int> &parent, int node){
        if(parent[node]==node){
            return node;
        }
        // Recursive call & path compression logic
        return parent[node] = findParent(parent, parent[node]); 
    }

    // Union function
    void unionSet(int u, int v, vector<int> &parent, vector<int> &rank){
        u = findParent(parent, u);
        v = findParent(parent, v);

        if(rank[u] < rank[v]){
            parent[u] = v;
        }
        else if(rank[v] < rank[u]){
            parent[v] = u;
        }
        else{
            parent[v] = u;
            rank[u]++;
        }
    }
};

int main(){
    
    return 0;
}