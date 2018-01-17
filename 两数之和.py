#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 9:08
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 两数之和.py
# @Software: PyCharm

class Solution:

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
    """
    @param: numbers: An array of Integer
    @param: target: target = numbers[index1] + numbers[index2]
    @return: [index1 + 1, index2 + 1] (index1 < index2)
    """
    def twoSum(self, numbers, target):
        # write your code here

        for i in range(len(numbers)):

            if(target-numbers[i] in numbers[i+1:]):
                pos = numbers.index(target - numbers[i],i+1,len(numbers))
                return [i,pos]


s=Solution()
s.twoSum([1,0,-1],-1)

