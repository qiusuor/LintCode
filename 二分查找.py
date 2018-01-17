#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:46
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 二分查找.py
# @Software: PyCharm


class Solution:
    # @param nums: The integer array
    # @param target: Target number to find
    # @return the first position of target in nums, position start from 0
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
        return -1
