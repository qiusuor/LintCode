#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 10:06
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 恢复旋转排序数组.py
# @Software: PyCharm

class Solution:
    """
    @param: nums: An integer array
    @return: nothing
    """
    def recoverRotatedSortedArray(self, nums):
        # write your code here
        nums.sort()
