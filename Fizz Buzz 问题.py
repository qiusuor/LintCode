#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 18:34
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : Fizz Buzz 问题.py
# @Software: PyCharm

class Solution:
    """
    @param: n: An integer
    @return: A list of strings.
    """
    def fizzBuzz(self, n):
        # write your code here
        A=[]
        for i in range(1,n+1):
            if(i%3==0 and i%5==0):A.append("fizz buzz")
            elif(i%3==0):A.append("fizz")
            elif(i%5==0):A.append("buzz")
            else: A.append(str(i))
        return A