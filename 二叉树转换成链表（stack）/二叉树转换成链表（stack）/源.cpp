#include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode *left, *right;
	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	};
};


class Solution {
public:
	/*
	* @param root: a TreeNode, the root of the binary tree
	* @return:
	*/
	vector<TreeNode*> stk;

	void flatten(TreeNode * root) {
		// write your code here
		stk.push_back(nullptr);
		auto  cur = root;
		while (cur)
		{
			if (cur->right)
				stk.push_back(cur->right);
			if (cur->left) {
				cur->right = cur->left;
				cur->left = nullptr;
				cur = cur->right;
			}
			else {
				cur->right = stk[stk.size() - 1];
				stk.pop_back();
				cur->left = nullptr;
				cur = cur->right;
			}
		}

	}
};

