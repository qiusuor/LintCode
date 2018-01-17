#include <string>

using namespace std;

class Solution {
public:
	/*
	* @param str: An array of char
	* @param offset: An integer
	* @return: nothing
	*/
	void rotateString(string &str, int offset) {
		// write your code here
		if (str.size() == 0) return;
		offset = offset%str.size();
		string s = str;
		string result = "";
		for (int i = s.size() - offset; i < s.size(); i++)
			result += s[i];
		for (int i = 0; i < s.size() - offset; i++)
			result += s[i];
		str = result;
	}
};