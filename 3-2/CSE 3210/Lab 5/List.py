# -*- coding: utf-8 -*-
"""
Created on Sun Mar  8 11:49:29 2020

@author: Akash
"""

#Examples

data = []
print(data)

data.append("Hello")
print(data)

data.append(5)
print(data)

data.extend([4,5,6])
print(data)
print("\n")
#STRINGS
print("STRINGS:")
s = "ÄTCG"
print(s[0])
print(s[-1])
print(s[2:])
print ("C" in s)
print(s * 3)

print("\n")


#LIST
print("LIST:")
L = ["adenine", "thymine", "cytosine", "guanine"]
print(L[0])
print(L[-1])
print(L[2:])
print("cytosine" in L)
print(L * 3)
L[1] = "uracil"
print(L[1])
L.reverse()
print(L)
del L[0]

print("\n")


#Exercise 1
print("Exercise 1") 
seq = input("Enter a  sequence: ")
for i in range(10):
    print(i," ",seq)
   
print("\n")

#Exercise 2
print("Exercise 2") 
n = 1
for letter in seq:
    print("base ",n," is ",letter)
    n = n+1
    
print("\n")

#Exercise 3
print("Exercise 3")    
restriction_sites = [
  "GAATTC",    # EcoRI
  "GGATCC",    # BamHI
  "AAGCTT",    # HindIII
]

for i in range(3):
    print(restriction_sites[i]," is a restriction site")

print("\n")

#Exercise 4
print("Exercise 4")    
restriction_sites = [
  "GAATTC",    # EcoRI
  "GGATCC",    # BamHI
  "AAGCTT",    # HindIII
]

for i in range(3):
    print(restriction_sites[i]," is in the sequence:")
    print(restriction_sites[i] in seq)

print("\n")


























