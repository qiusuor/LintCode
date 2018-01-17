#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 16:39
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 丑数 II.py
# @Software: PyCharm

import time

start=time.time()
class Solution:
    """
    @param: n: An integer
    @return: the nth prime number as description.
    """

       # def judge(self, num):
       #  # num=int(num)
       #  while (True):
       #      # print(num)
       #      if (num % 2 == 0):
       #          num //= 2
       #      elif (num % 3 == 0):
       #          num //= 3
       #      elif (num % 5 == 0):
       #          num //= 5
       #      elif (num == 1):
       #          return True
       #      else:
       #          return False

    def nthUglyNumber(self, n):
        already=set()
        if(n==1): return  1


        i=1
        already.add(1)
        cur=1
        while(i<n):
            # if(self.judge(cur)):
            #     already.add(cur)
            #     i+=1
            # cur+=1
            min=cur*2
            for num in already:
                if num*2>cur:
                    # cur = num * 2
                    # already.add(cur)
                    # i+=1
                    if(min>num*2):
                        min=num*2
                    # break
                elif num*3>cur:
                    if (min > num * 3):
                        min = num * 3
                    # cur = num * 3
                    # already.add(cur)
                    # i+=1
                    # break
                elif num*5>cur:
                    if (min > num * 5):
                        min = num * 5
            already.add(min)
            cur=min
            i+=1



        return cur
        # write your code here



s=Solution()
print(s.nthUglyNumber(1665))
print(time.time()-start)
# print(s.judge(4))
# for i in range(42):
#     print(i,s.nthUglyNumber(i))
#
# for i in range(15):
#     print(i,s.judge(i))