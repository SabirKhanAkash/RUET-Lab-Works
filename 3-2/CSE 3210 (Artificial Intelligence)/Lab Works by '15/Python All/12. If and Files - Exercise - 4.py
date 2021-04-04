#    List the sequences in
#    10_sequences.seq which have the pattern CTATA.
#    
#    Once that works, print the index of the first time that pattern is found.

filename = "Chapter Specification/sequence.txt"
i=1

for line in open(filename):
    line = line.rstrip()
    pos = line.find("CTATA")
    if pos != -1:
        print("Pattern matched in line no. = ", i, " and index no. = ", pos)
    i=i+1
