#include <iostream>

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

		for (int numCopy=n; numCopy /10; numCopy /=10)
		{
			numBit++;
		}

		int result = 1;
		for (int i=1;i<numBit;i++)
		{

		}
	}
};
int main(void) {

}
