# -*- coding: utf-8 -*-
"""
Created on Fri Dec 17 16:31:10 2021

@author: Hp
"""

import numpy as np
import matplotlib.pyplot as plt

#origin = np.array([[0, 0, 0],[0, 0, 0]]) # origin point
v1 = np.array([3,5])
v2 = np.array([6,-4])
r = v1 + v2
fig, ax = plt.subplots()
plt.quiver(0,0, v1[0],v1[1], color='r',angles='xy', scale_units='xy', scale=1, label="Vector 1")
plt.quiver(0,0, v2[0],v2[1], color='b',angles='xy', scale_units='xy', scale=1, label="Vector 2")
plt.quiver(0,0, r[0],r[1], color='g',angles='xy', scale_units='xy', scale=1, label="Resultant")
ax.axis([-10, 10, -10, 10])
ax.grid(b=True, which='major')
ax.set_title('Resolution of two vectors')
plt.xlabel("X axis")
plt.ylabel("Y axis")
ax.legend()
plt.show()