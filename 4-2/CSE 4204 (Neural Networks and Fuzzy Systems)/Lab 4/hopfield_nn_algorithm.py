import math
import numpy as np, numpy.random

inp = int(input("How many input features: "))
feature = math.ceil(inp * float(10/15))

rando = [1,-1]
inputs = []

unknownPattern = np.random.choice(rando, size=feature)

def calc(p,q):
    sum = 0;
    for x in range(inp):
        sum = sum + inputs[x][0:,p]*inputs[x][0:,q]
    return sum;

def checkMatch(uPatt, inps):
    m = 0
    t = 0
    for m in range(inp):
        t = list(np.array(uPatt == inps[m][0]).reshape(-1,))
        if (t.count(True) == feature):
            print("Matched ", t.count((True)))
            return m
    print("Matched ", t.count((True)))
    return False

def update(u,up,weight):
    res = np.matmul(u,weight[:,up])
    if(res >= 0):
        return 1
    else:
        return 0 - 1

print("\n<------------- Inputs ------------->")

for m in range(inp):
    inputs.append(np.random.choice(rando, size=feature).reshape(1,feature))
    print("P",(m)," = ",inputs[m])

w = np.random.choice(rando, size=feature * feature).reshape(feature,feature)

for i in range(feature):
    for j in range(feature):
        w[i:,j] = calc(i,j);

np.fill_diagonal(w,0)

print("\n<-------------------- Training Phase ----------------->\n<---------------- Generating Weight Matrix ------------->")
print(w)

print("\n<-------------------- Testing Phase ----------------->\n<------------------ Unknown Pattern ------------------->")
print(unknownPattern)

pp = 0
c = 0
while(1):
    print("\n------------------","Testing Cycle ",c,"----------------------------")
    c=c+1
    print("Updated Unknown Pattern = ",unknownPattern)
    final = checkMatch(unknownPattern,inputs)
    if(final == False):
        uv = unknownPattern[pp]
        unknownPattern[pp] = (update(unknownPattern, pp, w))

        if (pp == (feature - 1)):
            pp = 0
        else:
            pp = pp + 1
    else:
        print("\n------------------ Testing Completed ------------------")
        print("Final Unknown Pattern Matches with input pattern P", final)
        break;