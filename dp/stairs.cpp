#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;

        vector<int> dp(n + 1);
        dp[0] = dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main() {
    Solution solution;
    int n = 5;
    int ways = solution.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}


// https://leetcode.com/problems/climbing-stairs/description/