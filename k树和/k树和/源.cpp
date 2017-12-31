#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	/*
	* @param A: An integer array
	* @param k: A positive integer (k <= length(A))
	* @param target: An integer
	* @return: An integer
	*/
	int kSum(vector<int> &A, int k, int target) {
		// write your code here
		vector<vector<vector<int>>> dp(A.size()+1, vector<vector<int>>(k + 1, vector<int>(target + 1, 0)));
		for (int i = 0; i<A.size(); i++)
		{
			dp[i][0][0] = 1;
		}
		for (int i = 1; i<=A.size(); i++)
		{
			for (int j = 1; j <= k; j++)
			{
				for (int m = 1; m <= target; m++)
				{
					dp[i][j][m] = dp[i - 1][j][m];
					if (m >= A[i - 1]) {
						dp[i][j][m] += dp[i-1][j - 1][m - A[i - 1]];
					}
				}
			}
			cout << endl;
			for (int j = 0; j <= k; j++)
			{
				for (int m = 0; m <= target; m++)
				{
					cout << dp[i][j][m] << "      ";
				}
				cout << endl;
			}
			cout << endl;
		}
		return dp[A.size()][k][target];
	}
protected:
	inline int min(int a, int b) { return a < b ? a : b; }
};


int main(void) {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	Solution s;
	cout << s.kSum(a, 2, 5);
	system("pause");
}