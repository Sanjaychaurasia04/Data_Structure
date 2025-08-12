#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int rotten(vector<vector<int>> &rot)
{
    int row = rot.size();
    int col = rot[0].size();
    int fresh = 0;
    queue<pair<int, int>> rotted;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rot[i][j] == 2)
            {
                rotted.push({i, j});
            }
            else if (rot[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    int time = -1;
    // up , down , left , right
    vector<vector<int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while (!rotted.empty())
    {
        int size = rotted.size();
        time++;

        for (int i = 0; i < size; i++)
        {
            pair<int, int> curr = rotted.front();
            int n = curr.first;
            int m = curr.second;
            rotted.pop();

            for (auto dir : direction)
            {
                int nw = n + dir[0];
                int md = m + dir[1];
                if (nw >= 0 && md >= 0 && nw < row && md < col && rot[nw][md] == 1)
                {
                    rot[nw][md] = 2;
                    fresh--;
                    rotted.push({nw, md});
                }
            }
        }
    }
    return (fresh == 0) ? time : -1;
}

int main()
{
    vector<vector<int>> rot = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}};
    int ans = rotten(rot);
    cout << ans;
    return 0;
}