#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 17:36
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 第k大元素.py
# @Software: PyCharm

class Solution:
    # @param k & A a integer and an array
    # @return ans a integer
    def kthLargestElement(self, k, A):
        A.sort(reverse=True)
        return A[k-1]