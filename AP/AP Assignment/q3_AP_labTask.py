# -*- coding: utf-8 -*-
"""
Created on Fri Dec 17 16:15:42 2021

@author: Hp
"""

height = int(input("Enter height of the tower: "))
time = int(input("Enter the time interval: "))

dist = 1/2 * 9.81 * time**2
ball = height - dist
print(f'The height of the ball is {ball:.4f} meters')