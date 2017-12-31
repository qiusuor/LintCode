#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/*
	* @param : An integer
	* @param : An integer
	* @return: An integer denote the count of digit k in 1..n
	*/
	int digitCounts(int k, int n) {
		// write your code here


		int numBit = 1;

		int numCopy = n;
		for (; numCopy / 10; numCopy /= 10)
		{
			numBit++;
		}

		vector<int> bit(numBit, 0);
		numCopy = n;
		for (int i=numBit-1;i>=0;i--)
		{
			bit[i] = numCopy % 10;
			numCopy = numCopy / 10;
		}

		if (k == 0) {
			vector<int> dp(numBit, 0);
			dp[0] = 1;
			for (int i = 1; i < numBit; i++)
			{
				dp[i] = dp[i - 1] + 9 * i*pow(10, i - 1);
			}
			int resutl = 0;
			for (int i = numBit - 1; i > 0; i--)
			{
				n = n % (int)pow(10, i);
				resutl += bit[numBit - i - 1] *dp[i - 1];
			}
			if (n % 10 >= k) resutl += 1;
			return resutl;
		}
		else {
			vector<int> dp(numBit, 0);
			dp[0] = 1;
			for (int i = 1; i < numBit; i++)
			{
				dp[i] = (i + 1)*pow(10, i);
			}
			int resutl = 0;
			for (int i = numBit - 1; i > 0; i--)
			{
				
				n = n % (int)pow(10, i);
				resutl += bit[numBit-i -1]*dp[i-1];
				if (bit[numBit - i -1] == k)
					resutl += n + 1;
				if (bit[numBit - i - 1] > k) resutl += pow(10, i);
			}
			if (n % 10 >= k) resutl += 1;
			return resutl;
		}
	}
};
int main(void) {

	Solution s;
	cout << s.digitCounts(0, 19);
	system("pause");

}
