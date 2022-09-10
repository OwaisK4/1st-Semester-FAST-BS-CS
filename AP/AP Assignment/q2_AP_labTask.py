# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

name = "Owais"
section = "F"
def fibo(n):
    #i = 1000
    #a,b = 0,1
    a = 0
    b = 1
    print("[", end='')
    for x in range(n):
        #print(a, end=',')
        #if x > n-2:
        if x == n-1:
            print(a, end='')
        else:
            print(a, end=' ')
        a,b = b,a+b
    print("]")
    return "21K-3298"
n = int(input("Enter Number Of values: "))
#n=7
print(f'My name is {name} and my section is {section}')
print("Fibo Series:")
#fibo(n)
print("My roll number is:",fibo(n))