#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(vector<vector<int>> adj, int v)
{
    vector<int> visited(v, 0);
    visited[0] = 1;

    queue<int> q;
    q.push(0);

    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> adj = {{1, 2}, {0, 2, 3}, {0, 4}, {1, 4}, {2, 3}};
    int V = adj.size();

    vector<int> ans = bfs(adj, V);
    for (auto it : ans)
    {
        cout << it << endl;
    }

    return 0;
}
