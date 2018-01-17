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
	int uniquePaths(int m, int n) {
		// write your code here
		vector<vector<int>> dp(m, vector<int>(n, 1));
		for (int i = m - 2; i >= 0; i--)
			for (int j = n - 2; j >= 0; j--)
				dp[i][j] = dp[i][j + 1] + dp[i + 1][j];
		return dp[0][0];
	}
};
int main(void) {

}