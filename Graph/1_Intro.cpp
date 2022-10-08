// Graph : It is a non-linear data structure defined as a collection of vertices and edges 

#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, int direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // create an edge from u to v 
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<", ";
            }cout<<endl;
        }
    }
};

int main(){

    int n;
    cout<<"Enter the no. of nodes : ";
    cin>>n;

    int m;
    cout<<"Enter the no. of edges : ";
    cin>>m;

    graph g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        // creating an undirected Graph
        g.addEdge(u,v,0);
    }

    g.print();
    
    return 0;
}