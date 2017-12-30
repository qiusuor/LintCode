#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param m: An integer m denotes the size of a backpack
	* @param A: Given n items with size A[i]
	* @return: The maximum size
	*/
	int backPack(int m, vector<int> A) {
		// write your code here

		vector<vector<int>> dp(A.size(), vector<int>(m+1, 0));
		for (int i=1;i<=m;i++)
		{
			if (i >= A[0])
				dp[0][i] = A[0];
		}
		for (int i=1;i<A.size();i++)
		{
			for (int j=1;j<=m;j++)
			{
				if (j >= A[i])
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - A[i]] + A[i]);
				else dp[i][j] = dp[i - 1][j];
			}
		}
		return dp[A.size()-1][m];
	}
protected:
	inline int max(int a, int b) {
		return a < b ? b : a;
	}
};

int main(void) {

	system("pause");
}