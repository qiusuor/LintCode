#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 22:06
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 中位数.py
# @Software: PyCharm

class Solution:
    """
    @param: : A list of integers
    @return: An integer denotes the middle number of the array
    """

    def median(self, nums):
        nums.sort()
        length = len(nums) - 1
        mid = length // 2

        return nums[mid]
        # write your code here