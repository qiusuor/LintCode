#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <string>


using namespace std;


class TreeNode {
public:
	 int val;
     TreeNode *left, *right;
     TreeNode(int val) {
         this->val = val;
         this->left = this->right = NULL;
     }
};

class Solution {
public:
	/**
	* @param root the root of binary tree
	* @param target an integer
	* @return all valid paths
	*/
	void recursive(vector<int>path, TreeNode* cur, int val,int target, vector<vector<int>> &results) {
		int sum = val + cur->val;
		if (sum == target && !cur->left &&!cur->right) {
			path.push_back(cur->val);
			results.push_back(path);
			return;
		}
		if (cur->left) {
			path.push_back(cur->val);
			recursive(path, cur->left, sum, target, results);
		}
		if (cur->right) {
			if(!cur->left)
				path.push_back(cur->val);
			recursive(path, cur->right, sum, target, results);
		}
	}
	vector<vector<int>> binaryTreePathSum(TreeNode *root, int target) {
		// Write your code here
		vector<vector<int>> results;
		vector<int> path;

		if(root)
			recursive(path, root, 0, target, results);
		return results;
	}
};

int main(void) {

}