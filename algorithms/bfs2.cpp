#include <iostream>
#include <list>


using namespace std;

class Graph{
    private:
    int V;                     // Number of vertices
    list <int> *adj;           // Pointer to adjacency list
    public:
    Graph(int v);
   
    void addEdge(int v,int w); // Implemention of method to add edges

    void BFS(int s);           // Method for BFS traversal give a source "s"

};

Graph::Graph(int v){
    V=v;                       // Set number of vertices
    adj = new list<int> [v];   // Create new adjacency list
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);        // Implementation of method to add edges
}

void Graph::BFS(int s){
    //Start with all vertices as not visited;
    bool *visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }

    list<int> queue; // Create a queue is empty

    // Starting vertex marked as visited and added to queue
    visited[s]=true;
    queue.push_back(s);
     for (auto it = queue.begin();it != queue.end(); ++it)
          { cout  << *it << ", ";}

     cout<<endl;

    while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        cout<<"pop_front :"<< s;
        cout<<endl;

    for (auto it = queue.begin();it != queue.end(); ++it)
        { cout  << *it << ", ";} 
    cout<<endl;

    // Get all adjacent vertices from that vertex
    cout << "Checking adjacent vertices for vertex : "<< s << endl;

    auto i= adj[s].begin(); // Pointer to begin of list queue
    auto j = adj[s].end();  // Pointer to end  of list queue
    
    for(i; i != j; i++){
        cout << "adj[s].begin() :"<< *i <<" adj[s].end() :"<< *j <<endl;
    // We only care about nodes not visited yet
    if(!visited[*i]){
    // Mark as visited 
    cout <<"Visit and enqueue " << *i << endl;
    visited[*i] = true;
    // Push back to check this vertex's vertices
    queue.push_back(*i);
    }

    }

    }
    
}


int main() {
  // Create a new graph
  Graph g(6);

  // Create some edges to the vertices
  // Connections for vertex 0
  g.addEdge(0, 1);
  g.addEdge(0, 2);

  // Connections for vertex 1
  g.addEdge(1, 0);
  g.addEdge(1, 3);
  g.addEdge(1, 4);

  // Connections for vertex 2
  g.addEdge(2, 0);
  g.addEdge(2, 4);

  // Connections for vertex 3
  g.addEdge(3, 1);
  g.addEdge(3, 4);
  g.addEdge(3, 5);

  // Connections for vertex 4
  g.addEdge(4, 1);
  g.addEdge(4, 2);
  g.addEdge(4, 3);
  g.addEdge(4, 5);

  // Connections for vertex 5
  g.addEdge(5, 3);
  g.addEdge(5, 4);

  // Perform BFS and print result
  g.BFS(2);

  return 0;
}