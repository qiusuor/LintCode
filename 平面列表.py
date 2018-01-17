#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:53
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 平面列表.py
# @Software: PyCharm


class Solution(object):

    # @param nestedList a list, each element in the list
    # can be a list or integer, for example [1,2,[1,2]]
    # @return {int[]} a list of integer

    def flattenHelp(self,nestedList,result):
        if(isinstance(nestedList,list)):
            for item in nestedList:
                self.flattenHelp(item,result)
        else:
            result.append(nestedList)
    def flatten(self, nestedList):
        # Write your code here
        resutlt=[]
        self.flattenHelp(nestedList,resutlt)
        return resutlt
