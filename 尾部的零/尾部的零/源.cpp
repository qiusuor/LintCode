#include <iostream>
#include <vector>

using namespace std;

/*

����˼·��
10���Էֽ�Ϊ1*10 ��2*5 10��������ڸ�λ�����迼��

���ڳ����������ģ����������ĳ��5,��Ȼ�����ĳ��2��������ÿ�������п��Էֽ��5�ĸ������ɡ�


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