#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
	/*
	* @param s: A string
	* @param dict: A dictionary of words dict
	* @return: A boolean
	*/
	bool wordBreak(string &s, unordered_set<string> &dict) {
		// write your code here
		if (s.length() == 0)return true;
		buildTree(dict);
		vector<int> stk;
		stk.push_back(0);
		int i = 0;

		while (stk.size())
		{
			i = stk[stk.size() - 1];
			stk.pop_back();
			Node *cur = root;
			while (true) {
				
				Node *child = hasChild(cur, s[i]);
				if (child != NULL) {
					if (i == s.length() - 1 && child->valid) return true;
					if (child->valid && child->child.size()>0) {
						stk.push_back(i+1);
						cur = child;
						
					}
					cur = child;
					i++;
					if (child->child.size() == 0) {
						cur = root;
					}
				}
				else {
					break;
				}
			}
		}
		return false;
	}

protected:
	struct Node
	{
		char val;
		bool valid;
		vector<Node*>child;
		Node() {
			valid = false;
		}
	
	};
	void buildTree(unordered_set<string> &dict) {
		root = new Node;
		for (auto i :dict)
		{
			Node * cur = root;
			for (int j=0;j<i.length();j++)
			{
				Node *child = hasChild(cur, i[j]);
				if (child==NULL) {
					Node * temp = new Node;
					temp->val = i[j];
					cur->child.push_back(temp);
					cur = temp;
				}
				else {
					cur = child;
				}
				if (j == i.length() - 1) cur->valid = true;
			}
		}
	}
	Node* hasChild(Node * root, char val) {
		for (auto i: root->child)
		{
			if (i->val == val) return i;
		}
		return NULL;
	}
private:
	Node *root = nullptr;
};

int main(void) {
	unordered_set<string> dict;
	dict.insert("aaaa");
	dict.insert("aa");
	
	string s = "aaaaaaa";
	Solution so;
	cout << so.wordBreak(s, dict);

	system("pause");
}