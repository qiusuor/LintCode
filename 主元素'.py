#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 10:09
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 主元素'.py
# @Software: PyCharm

class Solution:
    """
    @param: nums: a list of integers
    @return: find a  majority number
    """
    def majorityNumber(self, nums):
        # write your code here
        appearTimes=dict()
        for num in nums:
            if(num not in appearTimes.keys()):
                appearTimes[num]=1
            else:
                appearTimes[num]+=1
            if(appearTimes[num]> len(nums)//2):
                return num


s=Solution()
s.majorityNumber([1,1,1,1,2,2,2])