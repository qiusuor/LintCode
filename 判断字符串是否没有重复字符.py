#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 12:02
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 判断字符串是否没有重复字符.py
# @Software: PyCharm

class Solution:
    """
    @param: str: A string
    @return: a boolean
    """
    def isUnique(self, str):
        s=set()
        for i in str:
            if(i in s):
                return False
            else:
                s.add(i)
        return True
        # write your code here
