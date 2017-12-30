#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
	/*
	* @param nums: an integer array and all positive numbers, no duplicates
	* @param target: An integer
	* @return: An integer
	*/
	int backPackVI(vector<int> &nums, int target) {
		// write your code here
		sort(nums.begin(), nums.end());
		vector<int> dp(target + 1, 0);
		dp[0] = 1;
		for (int i=1;i<=target;i++)
		{
			for (int j=0;j<nums.size();j++)
			{
				if (i >= nums[j]) 
					dp[i] += dp[i - nums[j]];
			}
		}
		return dp[target];
	}
};


int main(void) {
	vector<int> num;;
	num.push_back(1);
	num.push_back(2);
	num.push_back(4);
	Solution s;
	cout<<s.backPackVI(num, 4);
	system("pause");
}