// Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph

#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight){
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }

    void print(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
               cout<<"("<<j.first<<","<<j.second<<"), ";
            }cout<<endl;
        }
    }

    void dijkstra(int src, vector<int> &distance, set<pair<int, int>> &st)
    {
        // Initialize distance and set with source node
        distance[src] = 0;
        st.insert(make_pair(0, src));

        while(!st.empty()){
            // fetch top record
            auto top = *(st.begin());

            int nodeDistance = top.first;
            int topNode = top.second;

            // Remove top record now
            st.erase(st.begin());

            // traverse on neighbours
            for(auto neighbour : adj[topNode]){
                if(nodeDistance + neighbour.second < distance[neighbour.first]){

                    auto record = st.find(make_pair(distance[neighbour.first], neighbour.first));
                    // if record found then erase it
                    if(record != st.end()){
                        st.erase(record);
                    }

                    // update the distance
                    distance[neighbour.first] = nodeDistance + neighbour.second;
                    // push the record in the set
                    st.insert(make_pair(distance[neighbour.first], neighbour.first));
                }
            }
        }
    }

}; 

int main(){

    graph g;

    g.addEdge(1, 2, 3);
    g.addEdge(1, 4, 1);
    g.addEdge(2, 0, 1);
    g.addEdge(1, 0, 7);
    g.addEdge(1, 3, 5);
    g.addEdge(4, 3, 7);
    g.addEdge(0, 3, 2);

    // g.print();

    int n = 5; // No. of Node
    // Creation of distace array
    vector<int> distance(n);

    // initialize the distance array with infinite value
    for(int i=0; i<n; i++){
        distance[i] = INT_MAX;
    }

    // Creation of set on basis (distance, node)
    set<pair<int, int>> st;
    int source = 0;

    g.dijkstra(source, distance, st);

    for(int i=0; i<n; i++){
        cout<<distance[i]<<" ";
    }cout<<endl;
    
    return 0;
}