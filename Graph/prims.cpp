// TO calculate cost of minimum spanning tree 

#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight){
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }

    void prims(int n, vector<int> &key, vector<int> &mst, vector<int> &parent)
    {
        // let's start the algo
        key[0] = 0;
        parent[0] = -1;

        for(int i=0; i<n; i++){

            int mini = INT_MAX;
            int u;
            // find the min wali node
            for(int j=0; j<n; j++){
                if(mst[j] == false && key[j] < mini){
                    u = j;
                    mini = key[j];
                }
            }

            // Mark min node as true
            mst[u] = true;

            // check its adjacent nodes
            for(auto it : adj[u]){
                int v = it.first;
                int w = it.second;
                if(mst[v] == false && w < key[v]){
                    parent[v] = u;
                    key[v] = w;
                }
            }
        }

    }

};

int main(){

    graph g;

    g.addEdge(0, 1, 2);
    g.addEdge(1, 2, 3);
    g.addEdge(2, 4, 7);
    g.addEdge(1, 4, 5);
    g.addEdge(1, 3, 8);
    g.addEdge(0, 3, 6);

    int n = 5; // No. of Node

    vector<int> key(n);
    vector<int> mst(n);
    vector<int> parent(n);

    for(int i=0; i<n; i++){
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }

    g.prims(n, key, mst, parent);

    int minWeight = 0;

    for(int i=0; i<n; i++){
        minWeight += key[i];
    }

    cout<<"Cost of Min. Spanning Tree is : "<<minWeight<<endl;
    
    return 0;
}