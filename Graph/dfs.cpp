#include <iostream>
#include <vector>
using namespace std;

vector<int> dfs(int start, vector<vector<int>> &adj, int v, vector<int> &visited, vector<int> &ans)
{
    visited[start] = 1;
    ans.push_back(start);

    for (auto it : adj[start])
    {
        if (!visited[it])
        {
            dfs(it, adj, v, visited, ans);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> adj = {{1, 2},
                               {0},
                               {0, 3, 4},
                               {2},
                               {2}};
    int v = adj.size();
    vector<int> visited(v, 0);
    vector<int> ans;
    int start = 0;

    vector<int> finalans = dfs(start, adj, v, visited, ans);

    for (auto it : finalans)
    {
        cout << it << "  ";
    }
    return 0;
}