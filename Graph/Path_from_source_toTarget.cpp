#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // DFS helper to explore all paths
    void helper(vector<vector<int>> &graph, int node, vector<vector<int>> &path, vector<int> &temp)
    {
        temp.push_back(node);

        // If we reach the target node, save the current path
        if (node == graph.size() - 1)
        {
            path.push_back(temp);
        }
        else
        {

            for (int next : graph[node])
            {
                helper(graph, next, path, temp);
            }
        }

        // Backtracking
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        vector<vector<int>> path; // store all possible paths
        vector<int> temp;         // current path
        helper(graph, 0, path, temp);
        return path;
    }
};

int main()
{
    // 0 -> {1,2}, 1 -> {3}, 2 -> {3}, 3 -> {}
    vector<vector<int>> graph = {{1, 2}, {3}, {3}, {}};

    Solution obj;
    vector<vector<int>> ans = obj.allPathsSourceTarget(graph);

    cout << "All Paths from Source to Target:\n";
    for (auto &p : ans)
    {
        for (int node : p)
        {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
