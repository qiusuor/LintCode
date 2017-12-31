#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	/*
	* @param nums: A list of integers
	* @return: A integer indicate the sum of max subarray
	*/
	int maxSubArray(vector<int> &nums) {
		// write your code here
		if (nums.size()==0)
		{
			return 0;
		}
		vector<int> dp(nums.size());
		dp[0] = nums[0];
		for (int i=1;i<nums.size();i++)
		{
			if (dp[i - 1] > 0)
				dp[i] = dp[i - 1] + nums[i];
			else dp[i] = nums[i];
		}
		int answer = dp[0];
		for (int i=0;i<dp.size();i++)
		{
			if (answer < dp[i])
				answer = dp[i];
		}
		return answer;
	}
};
/*
思路：动态规划


*/
int main(void) {
	Solution s;
	vector<int> a;
	a.push_back(3);
	cout<<s.maxSubArray(a);
	system("pause");
}