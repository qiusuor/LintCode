#include <iostream>
#include <vector>
#include <queue>
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
	* This method will be invoked first, you should design your own algorithm
	* to serialize a binary tree which denote by a root node to a string which
	* can be easily deserialized by your own "deserialize" method later.
	*/
	string serialize(TreeNode * root) {
		// write your code here
		if (root == nullptr) return "#";
		string serails = "";
		queue<TreeNode*> q;
		q.push(root);
		serails += root->val;
		TreeNode* cur = root;
		while (q.size()) {
			cur = q.front();
			q.pop();
			if (cur->left != nullptr) {
				serails += cur->left->val;
				q.push(cur->left);
			}
			else
				serails += "#";
			if (cur->right != nullptr) {
				serails += cur->right->val;
				q.push(cur->right);
			}
			else
				serails += "#";
		}

		cout << serails;
		return serails;
	}

	/**
	* This method will be invoked second, the argument data is what exactly
	* you serialized at method "serialize", that means the data is not given by
	* system, it's given by your own serialize method. So the format of data is
	* designed by yourself, and deserialize it here as you serialize it in
	* "serialize" method.
	*/
	TreeNode * deserialize(string &data) {
		// write your code here
		if (data[0]=='#') return nullptr;
		TreeNode *root = new TreeNode(data[0]);
		queue<TreeNode*> q;
		q.push(root);
		int i = 1;
		TreeNode * cur = nullptr;
		while (i<data.size())
		{
			cur = q.front();
			q.pop();
			if (data[i++] != '#') {
				TreeNode * temp = new TreeNode(data[i - 1]);
				cur->left = temp;
				q.push(temp);
			}
			if (data[i++] != '#') {
				TreeNode * temp = new TreeNode(data[i - 1]);
				cur->right = temp;
				q.push(temp);
			}
		}
		return root;
	}
};


int main(void) {

	TreeNode * root = new TreeNode('1');
	root->right = new TreeNode('2');
	Solution s;
	
	TreeNode *p = s.deserialize(s.serialize(root));

	cout << "DSJKF";
	system("pause");
}