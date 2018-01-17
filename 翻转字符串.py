#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 11:58
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 翻转字符串.py
# @Software: PyCharm

class Solution:
    """
    @param: s: A string
    @return: A string
    """
    def reverseWords(self, s):
        vec=s.split(' ')
        vec1=[]
        for item in reversed(vec):
            if(len(item)>=1):
                vec1.append(item)
        return ' '.join(vec1)
        # write your code here