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

void shot(int src, int dest, vector<int> &dist)
{
    queue<int> q;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto neighbour : graph[curr])
        {
            if (!visited.count(neighbour))
            {
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
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