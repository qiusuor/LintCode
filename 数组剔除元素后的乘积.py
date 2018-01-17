#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 10:21
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 数组剔除元素后的乘积.py
# @Software: PyCharm

class Solution:
    """
    @param: nums: Given an integers array A
    @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
    """
    def productExcludeItself(self, nums):
        # write your code here
        prob=[]

        if(len(nums)==0): return  prob

        prob.append(1)
        for i in range(1,len(nums)):
            prob.append(prob[i-1]*nums[i-1])

        tmp=nums[len(nums)-1]
        for i in reversed(range(len(nums)-1)):
            prob[i]=prob[i]*tmp
            tmp=tmp*nums[i]


        return prob
