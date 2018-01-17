#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 19:09
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 插入区间.py
# @Software: PyCharm




class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end



class Solution:
    """
    @param: intervals: Sorted interval list.
    @param: newInterval: new interval.
    @return: A new interval list.
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

    def insert(self, intervals, newInterval):
        # write your code here
        if(len(intervals)==0): return [newInterval]

        # print("1")
        for item in intervals:
            if(newInterval.start>=item.start and newInterval.start<=item.end):
                newInterval.start=item.start
                break
        # print("2")
        for item in intervals:
            if(newInterval.end>=item.start and newInterval.end<=item.end):
                newInterval.end=item.end
                break
        # print("3")
        print(newInterval.start,newInterval.end)

        newIntervals=[]
        for item in intervals:
            if(item.start>=newInterval.start and item.end<=newInterval.end):
                continue
            else:
                newIntervals.append(item)
        # print("4")

        for item in newIntervals:
            print(item.start,item.end)

        i=0
        if(len(newIntervals)>0 and newIntervals[0].start>newInterval.end):
            pass
        else:
            while(i<len(newIntervals)-1):
                if(newIntervals[i-1].end<newInterval.start and newInterval.end<newIntervals[i].start):
                    break
                i += 1
            if(i==len(newIntervals)-1 and newIntervals[i].end<newInterval.start):
                i+=1

        print(i)
        newIntervals.insert(i,newInterval)

        return newIntervals

s=Solution()
a=Interval(1,5)
b=Interval(2,3)
print(s.insert([a],b))