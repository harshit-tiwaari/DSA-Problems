#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9; // Set infinite distance as 10^9

int main()
{
    int n, m; // n = number of vertices, m = number of edges
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n); // adjacency list to store graph

    for(int i = 0; i < m; i++) // input the edges and weights
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> dist(n, INF); 
    vector<int> parent(n, -1);
    vector<bool> visited(n, false); 

    int source = 0; 
    dist[source] = 0;

    for(int i = 0; i < n-1; i++) 
    {
        int u = -1;
        for(int j = 0; j < n; j++)
        {
            if(!visited[j] && (u == -1 || dist[j] < dist[u])) 
            {
                u = j; 
            }
        }

        visited[u] = true;

        for(auto v : adj[u]) /
        {
            int vertex = v.first;
            int weight = v.second;

            if(!visited[vertex] && weight < dist[vertex]) 
            {
                dist[vertex] = weight; 
                parent[vertex] = u; 
            }
        }
    }

    int cost = 0; 

    for(int i = 1; i < n; i++) 
    {
        cost += dist[i]; 
        cout << parent[i] << " - " << i << " : " << dist[i] << endl; 
    }

    cout << "Total cost of MST is " << cost << endl; 

    return 0;
}
