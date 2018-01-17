#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
	/*
	* @param m: positive integer (1 <= m <= 100)
	* @param n: positive integer (1 <= n <= 100)
	* @return: An integer
	*/
	int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
		// write your code here
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();

		if (obstacleGrid[0][0]) return 0;
		vector<vector<int>> dp(m, vector<int>(n, 0));
		dp[m - 1][n - 1] = !obstacleGrid[m - 1][n - 1];
		for (int i = m - 2; i >= 0; i--)
			dp[i][n - 1] = dp[i + 1][n - 1] && !obstacleGrid[i + 1][n - 1];
		for (int i = n - 2; i >= 0; i--)
			dp[m - 1][i] = dp[m - 1][i + 1] && !obstacleGrid[m - 1][i + 1];
		for (int i = m - 2; i >= 0; i--)
			for (int j = n - 2; j >= 0; j--)

				dp[i][j] = dp[i][j + 1] * !obstacleGrid[i][j + 1] + dp[i + 1][j] * !obstacleGrid[i + 1][j];
		return dp[0][0];
	}
};
int main(void) {

}