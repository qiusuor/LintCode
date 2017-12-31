#include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	/**
	* @param dictionary: a vector of strings
	* @return: a vector of strings
	*/
	vector<string> longestWords(vector<string> &dictionary) {
		// write your code here
		int len = 0;
		for (int i=0;i<dictionary.size();i++)
			if ((dictionary[i]).size() > len) 
				len = dictionary[i].size();
		vector<string> result;
		for (int i = 0; i < dictionary.size(); i++)
			if ((dictionary[i]).size() == len)
				result.push_back(dictionary[i]);
		return result;
	}
};