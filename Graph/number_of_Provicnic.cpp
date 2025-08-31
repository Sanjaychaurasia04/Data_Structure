#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Depth First Search
    void dfs(vector<vector<int>> &adj, int node, vector<bool> &visited)
    {
        visited[node] = true;

        for (int j = 0; j < adj.size(); j++)
        {
            // if node j is connected and not yet visited
            if (adj[node][j] == 1 && !visited[j])
            {
                dfs(adj, j, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int V = isConnected.size();
        vector<bool> visited(V, false);
        int ans = 0;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfs(isConnected, i, visited);
                ans++; // each DFS call = one province
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> isConnected1 = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}};
    cout << "Provinces example: " << sol.findCircleNum(isConnected1) << endl;

    return 0;
}
