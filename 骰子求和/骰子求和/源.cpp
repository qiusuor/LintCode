#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param n an integer
	* @return a list of pair<sum, probability>
	*/
	vector<pair<int, double>> dicesSum(int n) {
		// Write your code here
		vector<vector<long long>> dp(n + 1, vector<long long>(6 * n + 1, 0));

		dp[1][1] = 1;
		dp[1][2] = 1;
		dp[1][3] = 1;
		dp[1][4] = 1;
		dp[1][5] = 1;
		dp[1][6] = 1;

		vector<pair<int, double>> result(5*n+1);
		for (int i = 2; i <= n; i++)
		{
			for (int j = i; j <= 6 * i; j++)
			{
				long long x1 = 0;
				long long x2 = 0;
				long long x3 = 0;
				long long x4 = 0;
				long long x5 = 0;
				long long x6 = 0;

				if (j - 1 >= 0)
					x1 = dp[i - 1][j - 1];
				if (j - 2 >= 0)
					x2 = dp[i - 1][j - 2];
				if (j - 3 >= 0)
					x3 = dp[i - 1][j - 3];
				if (j - 4 >= 0)
					x4 = dp[i - 1][j - 4];
				if (j - 5 >= 0)
					x5 = dp[i - 1][j - 5];
				if (j - 6 >= 0)
					x6 = dp[i - 1][j - 6];

				dp[i][j] = x1 + x2 + x3 + x4 + x5 + x6;
			}

		}
		long double stateNums =pow(6, n);
		int j = 0;
		for (int i=n;i<=6*n;i++)
		{
			pair<int, double> temp;
			temp.first = i;
			temp.second = dp[n][i] / stateNums;
			result[j++]=(temp);
		}
		return result;
	}
};

int main(void) {
	Solution s;
	s.dicesSum(15);
	system("pause");
}