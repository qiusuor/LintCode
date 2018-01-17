#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 20:02
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 搜索插入位置.py
# @Software: PyCharm

class Solution:
    """
    @param: A: an integer sorted array
    @param: target: an integer to be inserted
    @return: An integer
    """
    def binarySearch(self, nums, target):
        # write your code here
        left=int(0)
        right=len(nums)-1
        mid=(left+right)//2
        while(left<=right):
            if(target>nums[mid]):
                left=mid+1
            elif(target<nums[mid]):
                right=mid-1
            else:
                if(mid>=1 and nums[mid-1]==target):
                    mid=mid-1
                    continue
                return mid
            mid = (left + right) // 2
        return mid+1

    def searchInsert(self, A, target):
        return self.binarySearch(A,target)
        # write your code here