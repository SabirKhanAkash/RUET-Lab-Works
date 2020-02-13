#    Write a program to count the total number of bases
#    in all of the sequences in the file
#    /usr/coursehome/dalke/ambiguous_sequences.seq
#    and the total number of each base found, in order
#    
#    File has 24789 bases
#    A = 6504
#    B = 1
#    C = 5129
#    D = 1
#    G = 5868
#    K = 1
#    M = 1
#    N = 392
#    S = 2
#    R = 3
#    T = 6878
#    W = 1
#    Y = 8

main = ""
for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    main = main+seq;

seq = main
print("Sequence has", len(seq), "bases")
counts = {}
for base in seq:
  counts[base] = counts.get(base, 0) + 1

keys = counts.keys()
keys = sorted(keys)
for i in keys:
    print(i, "=", counts[i])
