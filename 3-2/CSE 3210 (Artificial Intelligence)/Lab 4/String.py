# -*- coding: utf-8 -*-
"""
Created on Sun Mar  8 11:49:29 2020

@author: Akash
"""

# Assignment 1

seq = input("Enter a string: ")
x = len(seq)
print("It is ",x," based long")


# Assignment 2 and 3
al = seq.upper()

a = al.count("A")
t = al.count("T")
c = al.count("C")
g = al.count("G")



print("adenine = ",a)
print("thymine = ",t)
print("cytosine = ",c)
print("guanine = ",g)


