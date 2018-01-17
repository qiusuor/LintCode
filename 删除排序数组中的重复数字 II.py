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
        count=1
        while(j<len(nums)):
            # print(i,j,cur)
            if(nums[j]!=cur):
                i+=1
                cur=nums[j]
                nums[i]=cur
                count=1
            else:
                count+=1
                if(count==2):
                    i+=1
                    nums[i]=cur
            j += 1
        # print(nums[:i+1])
        return i+1
        # write your code here

s=Solution()
s.removeDuplicates([-14,-14,-14,-14,-14,-14,-14,-13,-13,-13,-13,-12,-11,-11,-11,-9,-9,-9,-7,-7,-7,-6,-6,-5,-5,-5,-4,-4,-4,-3,-3,-3,-2,-2,-2,-1,-1,0,0,0,0,1,1,1,2,2,2,2,3,3,3,3,3,4,4,4,5,5,6,6,6,7,7,7,7,8,8,8,8,9,9,10,10,11,11,11,11,11,12,12,12,12,13,13,13,13,14,14,15,16,17,18,18,18,20,20,21,21,21,21,21,22,22,22,22,23,24,24,25])
