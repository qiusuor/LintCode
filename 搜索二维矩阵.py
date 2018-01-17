#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:59
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 搜索二维矩阵.py
# @Software: PyCharm


class Solution:
    """
    @param: matrix: matrix, a list of lists of integers
    @param: target: An integer
    @return: a boolean, indicate whether matrix contains target
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
        return -1

    def searchMatrix(self, matrix, target):
        # write your code here
        for row in matrix:
            if(self.binarySearch(row,target)!=-1):
                return True
        return False


s=Solution()
print(s.binarySearch([5],2))
