# -*- coding: utf-8 -*-
"""
Created on Sun Mar  8 12:47:23 2020

@author: Akash
"""

if "GAATTC" in "ATCTGGAATTCATCG":
    print("ËcoRI site is present")
    
#Exercise 1

print("Exercise 1") 
seq = input("Enter a  sequence: ")

if "A" in seq:
    print ("A count: ",seq.count("A"))
if "T" in seq:
    print ("T count: ",seq.count("T"))
if "C" in seq:
    print ("C count: ",seq.count("C"))
if "G" in seq:
    print ("G count: ",seq.count("G"))
    
print("\n")

#Exercise 2

print("Exercise 2")
seq = input("Enter a  sequence: ")

if "A" in seq:
    print ("A count: ",seq.count("A"))
if "A" not in seq:
    print ("A not found")
if "T" in seq:
    print ("T count: ",seq.count("T"))
if "T" not in seq:
    print ("T not found")
if "C" in seq:
    print ("C count: ",seq.count("C"))
if "C" not in seq:
    print ("C not found")
if "G" in seq:
    print ("G count: ",seq.count("G"))
if "G" not in seq:
    print ("G not found")
    
print("\n")

#Exercise 3

n = 1
filename = "D:/Study Materials/Study/Lab/RUET-Lab-Works/3-2/CSE 3210/Lab 5/10_sequences.seq"
for line in open(filename):
    line = line.rstrip()
    print(n,line[:])
    n = n+1

print("\n")

#Exercise 4

m = 1
fileName = "D:/Study Materials/Study/Lab/RUET-Lab-Works/3-2/CSE 3210/Lab 5/10_sequences.seq"
for line in open(fileName):
    line = line.rstrip()
    pos = line.find("CTATA")
    if pos != -1:
        print("CTATA is found in the index no: ",pos," and line no: ",m)
    m = m+1
