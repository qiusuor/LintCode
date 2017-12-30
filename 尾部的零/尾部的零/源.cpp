#include <iostream>
#include <vector>

using namespace std;

/*

解题思路：
10可以分解为1*10 ，2*5 10不会出现在个位，不予考虑

由于乘数是连续的，如果出现了某个5,必然会出现某个2，因而求出每个乘数中可以分解的5的个数即可。


*/


class Solution {
public:
	/*
	* @param n: A long integer
	* @return: An integer, denote the number of trailing zeros in n!
	*/
	long long trailingZeros(long long n) {
		// write your code here, try to do it without arithmetic operators.
		long long sum = 0;
		long long base = 5;
		for (; base < n; base *= 5) {
			sum += n / base;
		}
		return sum;
	}
};
int main(void) {
	Solution s = Solution();
	cout<<s.trailingZeros(105);
	system("pause");
}