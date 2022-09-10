# -*- coding: utf-8 -*-
"""
Created on Sun Dec 12 22:50:01 2021

@author: Hp
"""

def perfect_square(n):
    x = 0
    #print("[", end='')
    while x**2 < n:
        #print(a, end=',')
        if (x+1)**2 > n:
            print(x**2, end='')
        else:
            print(x**2, end=', ')
        x += 1
n = int(input("Enter The Upper Bound: "))
print("The Perfect Squares Are:")
perfect_square(n)