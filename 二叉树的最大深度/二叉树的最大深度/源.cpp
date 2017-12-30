#include <iostream>

using namespace std;


class TreeNode {
public:
	int val;
	TreeNode *left, *right;
	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
}
;
class Solution {
public:
	/**
	* @param root: The root of binary tree.
	* @return: An integer
	*/
	int maxDepth(TreeNode *root) {
		
		int curDepth = 1;
		return maxDepthHelp(root, curDepth);
		// write your code here
	}
protected:
	int maxDepthHelp(TreeNode *root,int curDepth) {
		if (root == NULL) return curDepth - 1;
		if (root->left == NULL && root->right == NULL ) return curDepth;
		return max(maxDepthHelp(root->left, curDepth + 1), maxDepthHelp(root->right, curDepth + 1));
	}
	int max(int a, int b) {
		return a > b ? a : b;
	}
};
int main(void) {


	system("pause");
}