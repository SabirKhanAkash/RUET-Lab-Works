# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 16:14:19 2020

@author: akash
"""

#Exercise 1
print("Exercise 1")
print("-------------------------------")

seq = input("Enter a sequence: ")
fields = ["A", "T", "C", "G"]

for s in fields:
    if seq.count(s) != 0:
        print(s, "count:", seq.count(s))
        
#Exercise 2
print("Exercise 2")
print("-------------------------------")

seq = input("Enter a sequence: ")
fields = ["A", "T", "C", "G"]

for s in fields:
    if seq.count(s) != 0:
        print(s, "count:", seq.count(s))
    else:
        print(s, "not found")
        
#Exercise 3
print("Exercise 3")
print("-------------------------------")

filename = "sequence.txt"
i=1

for line in open(filename):
    line = line.rstrip()
    print(i, line)
    i=i+1
    
#Exercise 4
print("Exercise 4")
print("-------------------------------")

filename = "sequence.txt"
i=1

for line in open(filename):
    line = line.rstrip()
    pos = line.find("CTATA")
    if pos != -1:
        print("Pattern matched in line no. = ", i, " and index no. = ", pos)
    i=i+1
    
#Exercise 5
print("Exercise 5")
print("-------------------------------")

filename = "sequence.txt"

i = 0
for seq in open(filename):
    seq = seq.rstrip()
    i = i+1
    print(i,"  ",seq)

print("A.", i, "sequences are in that file.")

i = 0
for seq in open(filename):
    seq = seq.rstrip()
    pos = seq.find("CTATA")
    if pos != -1:
        i=i+1
        
print("B.", i, "sequences have the pattern CTATA.")