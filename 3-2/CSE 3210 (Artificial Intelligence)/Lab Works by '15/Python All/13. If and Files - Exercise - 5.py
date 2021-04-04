#    A. How many sequences are in that file?
#    B. How many have the pattern CTATA?
#    C. How many have more than 1000 bases?
#    D. How many have over 50% GC composition?
#    E. How many have more than 2000 bases and more than 50% GC composition?


filename = "Chapter Specification/sequence.txt"



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



i = 0
for seq in open(filename):
    seq = seq.rstrip()
    if len(seq) > 1000:
        i=i+1
        
print("C.", i, "sequences have more than 1000 bases.")



i = 0
for seq in open(filename):
    seq = seq.rstrip()
    num = seq.count("G")+seq.count("C")
    print(num)
    count = len(seq)
    num = num*1.0
    count = count*1.0
    if num/count*100.0 > 50:
        i=i+1
        
print("D.", i, "sequences have over 50% GC composition.")



i = 0
for seq in open(filename):
    seq = seq.rstrip()
    num = seq.count("GC")
    count = len(seq)
    num = num*1.0
    count = count*1.0
    if num/count*100.0 > 50 and count > 2000:
        i=i+1
        
print("E.", i, "sequences have more than 2000 bases and over 50% GC composition.")
