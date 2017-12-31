 #include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	/*
	* @param s: A string
	* @return: whether the string is a valid parentheses
	*/
	bool isValidParentheses(string s) {
		// write your code here
		vector<char> stk;
		for (auto i :s)
		{
			if (i == '(' || i == '[' || i == '{') stk.push_back(i);
			else if (i == ')') {
				if (stk.size() && stk[stk.size() - 1] == '(')
					stk.pop_back();
				else return false;
			}
			else if (i == '}') {
				if (stk.size() && stk[stk.size() - 1] == '{')
					stk.pop_back();
				else return false;
			}
			else if (i == ']') {
				if (stk.size() && stk[stk.size() - 1] == '[')
					stk.pop_back();
				else return false;
			}
		}
		if (stk.size()==0) return true;
		else return false;
	}
};
int main(void) {
	Solution s;
	cout << s.isValidParentheses("{}");
	system("pause");
}