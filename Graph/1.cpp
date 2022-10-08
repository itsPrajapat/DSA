#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, int direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed

        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void print(){
        unordered_map<int, list<int>> :: iterator itr;
        for(itr=adj.begin(); itr!=adj.end(); itr++){
            cout<<itr->first<<" -> ";
            for(auto i : itr->second){
                cout<<i<<", ";
            }cout<<endl;
        }
    }

    vector<int> bfsTraversal(){
        vector<int> ans;
        unordered_map<int, bool> visited;

        queue<int> q;
        q.push(1);
        visited[1] = 1;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);

            for(auto i : adj[front]){
                if(!visited[i]){
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
        return ans;
    }

    // Shortest path in an unweighted graph
    // T.C --> O(V+E)   // S.C --> O(V+E)
    vector<int> shortestPath(int src, int dest){   

        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        
        queue<int> q;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                    q.push(neighbour);
                }
            }
        }

        // prepare shortest path
        vector<int> ans;
        int currNode = dest;
        ans.push_back(dest);

        while(currNode != src){
            currNode = parent[currNode];
            ans.push_back(currNode);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    
};

int main(){

    graph g;

    int n;
    cin>>n;

    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        int u;
        int v;
        cin>>u>>v;
        // undirected graph
        g.addEdge(u,v,0);
    }

    g.print();

    vector<int> bfsPrint = g.bfsTraversal();
    for(auto i : bfsPrint){
        cout<<i<<" ";
    }cout<<endl;


    // shortest path of an unweighted graph
    vector<int> shortPath = g.shortestPath(1, 8);
    for(auto i : shortPath){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}