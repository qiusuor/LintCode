#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 22:30
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 比较字符串.py
# @Software: PyCharm

class Solution:
    """
    @param: A: A string
    @param: B: A string
    @return: if string A contains all of the characters in B return true else return false
    """
    def compareStrings(self, A, B):
        characters=dict()
        for item in A:
            if(item not in characters.keys()):
                characters[item]=1
            else:
                characters[item]+=1
        for item in B:
            if(item not in characters.keys()):
                return False
            elif(characters[item]>=1):
                characters[item]-=1
            elif(characters[item]<=0):
                return False
        return True
        # write your code here