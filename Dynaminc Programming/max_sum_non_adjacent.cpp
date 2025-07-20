#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    //recursive approach 
    int solve_recursive(vector<int>& nums, int n) {
        if (n == 0) {
            return nums[0];
        }
        if (n < 0) {
            return 0;
        }

        int skip = solve_recursive(nums, n - 1);
        int take = nums[n] + solve_recursive(nums, n - 2);

        return max(take, skip);
    }

// OPTIMIZED SOLUTION USING DP

    int solve(vector<int>& nums, int n, vector<int>& dp) {
        if (n == 0) {
            return nums[0];
        }
        if (n < 0) {
            return 0;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        int skip = solve(nums, n - 1, dp);
        int take = nums[n] + solve(nums, n - 2, dp);

        return dp[n] = max(take, skip);
    }

    int findMaxSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, -1);
        return solve(arr, n - 1, dp);
    }
};

int main() {
    // Example input
    vector<int> arr = {5, 5, 10, 100, 10, 5};

    Solution sol;
    int result = sol.findMaxSum(arr);

    cout << "Maximum sum without adjacent elements: " << result << endl;

    return 0;
}
