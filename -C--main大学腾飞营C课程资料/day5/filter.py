# -*- coding: utf-8 -*-
"""
Created on Mon Jul  8 15:49:28 2024

@author: wrm
"""

def is_odd(n):
    return n % 2 == 1

result=list(filter(is_odd, [1, 2, 4, 5, 6, 9, 10, 15]))
print (result)