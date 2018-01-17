#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:21
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 旋转字符串.py
# @Software: PyCharm

class Solution:
    """
    @param: str: An array of char
    @param: offset: An integer
    @return: nothing
    """
    def rotateString(self, str, offset):
        # write your code here
        str=''.join(str[-offset:]+str[offset:])