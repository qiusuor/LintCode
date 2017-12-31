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
	* @return: the length of last word
	*/
	int lengthOfLastWord(string s) {
		// write your code here
		int  stop;
		stop = s.size() - 1;
		bool st = false;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (!st) {
				if (s[i] != ' ') stop = i, st = true;
			}
			else {
				if (s[i] == ' ') return stop - i;
			}

		}
		if (st) return stop + 1;
		return 0;
	}
};

int main(void) {
	Solution S;
	cout << S.lengthOfLastWord("b a");
	cin.get();
}