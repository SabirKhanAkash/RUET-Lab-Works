# All exercises for numpy

import numpy as np

# Exercise - 1
print("Exercise - 1:")
v = np.array([0,1,2,3,4,5,6,7,8,9])
print(v)
print(), print(), print()





# Exercise
print("Exercise - 2:")
p = []
for i in range(len(v)):
    if i%2 != 0:
        p.append(v[i])
p = np.array(p)
print(p)
print(), print(), print()





# Exercise - 3
print("Exercise - 3:")
q = []
for i in range(len(v)-1, -1, -1):
    q.append(v[i])
q = np.array(q)
print(q)
print(), print(), print()





# Exercise - 4
print("Exercise - 4:")
a = np.array([1,2,3,4,5])
b = a[1:4]
print(a[1])
print(), print(), print()





# Exercise - 5
print("Exercise - 5:")
m = np.array([ [1,2,3,4,5],
               [6,7,8,9,10],
               [11,12,13,14,15],
               [16,17,18,19,20],
               [21,22,23,24,25] ])
print("m:\n", m)
print(), print(), print()





# Exercise - 6
print("Exercise - 6:")
s = []
for row in m:
    tmp = []
    for i in range(len(row)-1, -1, -1):
        tmp.append(row[i])
    s.append(tmp)
s = np.array(s)
print(s)
print(), print(), print()





# Exercise - 7
print("Exercise - 7:")
rev_s = []
for i in range(len(m)-1, -1, -1):
    rev_s.append(m[i])
rev_s = np.array(rev_s)
print(rev_s)
print(), print(), print()





# Exercise - 8
print("Exercise - 8:")
rev_all_s = []
for i in range(len(s)-1, -1, -1):
    rev_all_s.append(s[i])
rev_all_s = np.array(rev_all_s)
print(rev_all_s)
print(), print(), print()





# Exercise - 9
print("Exercise - 9:")
n = m[1:len(m)-1, 1:len(m[0])-1]
print(n)
print(), print(), print()





print("All Exercises Done, Bro! Chill...! :D")