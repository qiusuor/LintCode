#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 17:39
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 合并排序数组.py
# @Software: PyCharm


class Solution:
    """
    @param: A: sorted integer array A
    @param: B: sorted integer array B
    @return: A new sorted integer array
    """
    def mergeSortedArray(self, A, B):
        # write your code here
        C=A
        C.extend(B)
        C.sort()
        return C