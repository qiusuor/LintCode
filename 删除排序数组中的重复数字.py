#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 12:04
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 删除排序数组中的重复数字.py
# @Software: PyCharm

class Solution:
    """
    @param: nums: An ineger array
    @return: An integer
    """
    def removeDuplicates(self, nums):
        if(len(nums)==0):return
        i=0
        j=1
        cur=nums[0]
        while(j<len(nums)):
            if(nums[j]!=cur):
                i+=1
                cur=nums[j]
                nums[i]=cur
            j += 1
        return i+1
        # write your code here
