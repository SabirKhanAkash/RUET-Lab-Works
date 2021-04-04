# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 14:31:06 2020

@author: akash
"""

seq = "aaaaTaaaTaaT"
print(seq.find("T"))

print(seq.find("T",5))

print(seq.find("T",9))

print(seq.find("T",12))

print("-------------------------------")

pos = seq.find("T")
while pos != -1:
    print("T at index",pos)
    pos = seq.find("T",pos+1)
    
print("-------------------------------")

pos = -1
while 1:
    pos = seq.find("T",pos+1)
    if pos == -1:
        break
    print("T at index",pos)
    
print("-------------------------------")

sequences = []
for line in open("D://Study Materials//Study//Lab//RUET-Lab-Works//3-2//CSE 3210//Lab 7//filename.txt"):
    seq = line.rstrip()
    if seq.endswith("AAAAAAAA"):
        sequences.append(seq)
        if len(sequences)>10:
            print(sequences)
            break
        
print("-------------------------------")

data = ("Cape Town", 2004, [])
print(data)

print(data[0])

print(data[1:])

print("-------------------------------")

name = "Andrew"
print("%s come here" % (name))

print("-------------------------------")

print("Name: %s, age: %d, language: %s" % ("Andrew", 33, "Python"))

print("-------------------------------")

d= {"name": "Andrew", "age": 33,"language": "python"}
print ("%(name)s is %(age)s years old.  Yes, %(age)s." % d)

print("-------------------------------")

infile = open("sequences.txt")
outfile = open("sequences_small.txt","w")
for line in infile:
    seq = line.rstrip()
    if len(seq)<1000:
        outfile.write(seq)
        outfile.write("\n")
        
outfile.close()
infile.close()

print("-------------------------------")

#Exercise 1

while 1:
    seq = input("Protein sequence? ")
    if seq == "*":
        break
    i = 0
    j = len(seq)
    
    while i+5 <= j:
        if seq[i:i+5] in "FILAPVM":
            print("Hydrophobic signal")
            break
        if i+5 == j:
            print("No hydrophobic signal")
        i=i+1
    
    if j < 5:
        print("No hydrophobic signal")