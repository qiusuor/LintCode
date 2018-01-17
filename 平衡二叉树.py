#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 11:24
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 平衡二叉树.py
# @Software: PyCharm

"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""


class Solution:
    """
    @param: root: The root of binary tree.
    @return: True if this Binary tree is Balanced, or false.
    """

    def isBalanced(self, root):
        if (root == None): return True
        elif (root.right == None and root.left != None and (root.left.right!=None or root.left.left!=None)): return False
        elif(root.left == None and root.right != None and (root.right.left!=None or root.right.right!=None)):return  False
        else:
            return self.isBalanced(root.right) and self.isBalanced(root.left)
        # write your code here
