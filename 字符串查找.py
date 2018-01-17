#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:41
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 字符串查找.py
# @Software: PyCharm


class Solution:
    """
    @param: source: source string to be scanned.
    @param: target: target string containing the sequence of characters to match
    @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
    """
    def strStr(self, source, target):
        # write your code here
        if(target==None or source==None or target not in source):
            return -1
        return source.find(target)
