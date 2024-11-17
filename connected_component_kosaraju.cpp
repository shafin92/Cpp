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

      st.push(node);
   }
}

void dfs_back(int node)
{

   vis[node] = 1;

   cout << node << " ";

   for (auto it : adj[node])
   {

      if (!vis[it])
      {
         dfs_back(it);
      }

      st.push(node);
   }
}

int kosaraju(int V)
{

   for (int i = 0; i < V; i++)
   {
      if (!vis[i])
      {
         dfs(i);
      }
   }

   for (int i = 0; i < V; i++)
   {
      vis[i] = 0;

      for (auto it : adj[i])
      {
         adjT[it].push_back(i);
      }
   }
}

int main()
{

   cout << endl;

   return 0;
}