#include <bits/stdc++.h>
using namespace std;

#define MAX 105

bool vis[MAX];
vector<int> adj[MAX];
stack<int> st;
vector<int> adjT[MAX];

void dfs(int node)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it);
        }
    }
    st.push(node); // loop এর বাইরে
}

void dfs_back(int node)
{
    vis[node] = 1;
    cout << node << " ";
    for (auto it : adjT[node])
    {
        if (!vis[it])
        {
            dfs_back(it);
        }
    }
}

int kosaraju(int V)
{
    // Step 1: Original graph DFS
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    // Step 2: Transpose the graph
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            adjT[it].push_back(i);
        }
    }

    // Step 3: Reset visited array
    fill(vis, vis + V, 0);

    // Step 4: Process all nodes in stack
    int scc = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        if (!vis[node])
        {
            scc++;
            cout << scc << " SCC is: ";
            dfs_back(node);
            cout << endl;
        }
    }

    return scc;
}

int main()
{
    int edge, node;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int ans = kosaraju(node);
    cout << "The number of strongly connected components is: " << ans << endl;
    return 0;
}
