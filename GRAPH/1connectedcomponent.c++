#include <bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int v;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
    }

    visited.insert(curr);
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbor : graph[node])
    {
        if (!visited.count(neighbor))
        {
            dfs(neighbor, visited);
        }
    }
}

int connected_components()
{
    unordered_set<int> visited;
    int result = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited.count(i) == 0)
        {
            result++;
            dfs(i, visited);
        }
    }
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    visited.clear();
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x, y;
    cin >> x >> y;
}