#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/14 20:05
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 合并排序数组 II.py
# @Software: PyCharm

class Solution:
    """
    @param: A: sorted integer array A which has m elements, but size of A is m+n
    @param: m: An integer
    @param: B: sorted integer array B which has n elements
    @param: n: An integer
    @return: nothing
    """

    def mergeSortedArray(self, A, m, B, n):


        if( n==0): return
        if(m==0):
            for i in range(len(A)):
                A[i]=B[i]
        for i in reversed(range(m)):
            A[i+n]=A[i]

        i = n
        j = 0
        k = 0
        while (i < m+n or j < n):
            if (j>=n or i < m+n and A[i] < B[j] ):
                A[k] = A[i]
                i += 1
                k += 1

            else:
                A[k] = B[j]
                j += 1
                k += 1
        # print(A)

s=Solution()
s.mergeSortedArray([1,3,4,6,1,1],4,[2,5],2)