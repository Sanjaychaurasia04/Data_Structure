#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool cycle(vector<vector<int>> &adj, vector<bool> &visited, int node)
{
    queue<pair<int, int>> q;
    q.push({node, -1});
    visited[node] = true;

    while (!q.empty())
    {
        int c = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int it : adj[c])
        {
            if (!visited[it])
            {
                visited[it] = true;
                q.push({it, c});
            }
            else
            {
                if (parent != it)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> adj = {{}, {2}, {1, 3}, {2}};

    vector<bool> visited(4, false);
    bool ans;
    for (int i = 0; i < 4; i++)
    {
        if (!visited[i])
        {
            ans = cycle(adj, visited, i);
        }
    }
    cout << ans;

    return 0;
}