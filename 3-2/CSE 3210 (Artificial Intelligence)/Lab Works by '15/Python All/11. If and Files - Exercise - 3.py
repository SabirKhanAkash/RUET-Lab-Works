filename = "Chapter Specification/sequence.txt"
i=1

for line in open(filename):
    line = line.rstrip()
    print(i, line)
    i=i+1
