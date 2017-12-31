#include <limits>


struct TreeNode
{
	TreeNode*left = nullptr;
	TreeNode*right = nullptr;
	int val = 0;
};
class Solution {
public:
	/**
	* @param root the root of binary tree
	* @return the max node
	*/
	void recur(int &max, TreeNode* cur, TreeNode*& pos) {
		if (max < cur->val) {
			max = cur->val;
			pos = cur;
		}
		if (cur->left) recur(max, cur->left, pos);
		if (cur->right) recur(max, cur->right, pos);
	}
	TreeNode* maxNode(TreeNode* root) {
		// Write your code here
		int max = INT_MIN;
		TreeNode*pos = nullptr;
		if (root)
			recur(max, root, pos);
		return pos;

	}
};