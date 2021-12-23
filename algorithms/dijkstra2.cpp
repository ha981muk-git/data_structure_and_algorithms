#include <iostream>
#include <set>
#include <vector>
#include <list>
#define INF 1000

using namespace std;

class Graph{
    private:
    int V;                                         // number of vertices
    list<pair<int, int>> *adj;                     // Pointer to adjacency list

    public:
    Graph(int v);                                   // Contructor  prototype
    void addEdge(int v1,int v2, int weight);        // Method to add an edge/weight pair
    void shortestPath(int s );                      // Method for shortest Path
}

Graph::Graph(int v){
    V = v;                                          // Set number of vertices
    adj = new list<pair<int,int>> [v];
}

void Graph::addEdge(int v1,int v2, int weight){
     adj[v1].push_back(make_pair(v2,weight));
}

void Graph::shortestPath(int s){
    set<pair<int,int>>extract_set;                   // Create set to store vertices and use this to extract the shortest path
    vector<int> distances(V,INF);                    // Vector for distances and all paths are initialized to a large value 

    extract_set.insert(make_pair(0,s));              // Insert the entry point into the set and initialize distances to 0;
    distances[s] =0;
    
    while(!extract_set.empty()){                     // Continue until all shortest distances are finalized
    pair<int,int> tmp = *(extract_set.begin());      // Extract the minimum distancs
    extract_set.erase(extract_set.begin());          // Erase extract_set.begin() from set

    int u = tmp.second;                              // Get the vertex number


    }
}

int main(){


    return 0;
}