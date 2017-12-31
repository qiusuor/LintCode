class Solution {
public:
	/**
	* @param num a non-negative integer
	* @return one digit
	*/
	int addDigits(int num) {
		// Write your code here
		int sum = num;
		while (sum / 10) {
			num = sum;
			sum = 0;
			for (; num; num /= 10)
			{
				sum += num % 10;
			}
		}

		return sum;
	}
};