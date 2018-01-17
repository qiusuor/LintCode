#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time    : 2018/1/13 22:36
# @Author  : qiusuo
# @Email    : qiusuo2456@gmail.com
# @File    : 翻转链表.py
# @Software: PyCharm


class ListNode(object):

    def __init__(self, val, next=None):
        self.val = val
        self.next = next



class Solution:
    """
    @param: head: n
    @return: The new head of reversed linked list.
    """
    def reverse(self, head):

        cur=head

        pointer1 = None
        pointer2 = None
        if (head!=None and head.next!=None):
            pointer1=head.next
        if(pointer1!=None and pointer1.next!=None):
            pointer2=pointer1.next
        if(cur==None or pointer1==None): return cur

        cur.next = None
        while(True):
            pointer1.next = cur
            cur = pointer1
            if(pointer2==None):
                break
            pointer1=pointer2
            pointer2=pointer2.next

        return cur







        # write your code here