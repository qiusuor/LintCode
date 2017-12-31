#include <iostream>
#include <utility>
#include <thread>
#include <chrono>
#include <functional>
#include <atomic>
#include <string>

using namespace std;

class StringUtils {
public:
	/**
	* @param originalStr the string we want to append to
	* @param size the target length of the string
	* @param padChar the character to pad to the left side of the string
	* @return a string
	*/
	static string leftPad(string& originalStr, int size, char padChar = ' ') {
		// Write your code here
		string s;
		if (originalStr.size() >= size) return originalStr;
		for (int i = 0; i<size; i++)
		{
			if (i<size - originalStr.size())
			{
				s += padChar;
			}
			else s += originalStr[i-(size-originalStr.size())];
		}
		return s;
	}
};

int main(void) {
	StringUtils b;
	string a = "KJF";
	cout << b.leftPad(a, 10, '*');
	cin.get();
}