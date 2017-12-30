#include <iostream>

using namespace std;


/*
* @param a: An integer
* @param b: An integer
* @return: The sum of a and b
*/
int aplusb(int a, int b) {
	// write your code here
	if (a == 0) return b;
	if (b == 0)return a;
	int ci, sum;
	sum = a^b;
	ci = (a&b) << 1;
	return aplusb(sum, ci);
}

int main(void) {
	cout<<aplusb(33, 55);
	system("pause");
	return 0;
}