#    Modify your program from Exercise 1 to find the length
#    and letter counts for each sequence in
#    /usr/coursehome/dalke/ambiguous_sequences.seq
#    It is okay to print the base counts in a different order.
#    
#    Sequence has 1267 bases
#    A = 287
#    C = 306
#    B = 1
#    G = 389
#    R = 1
#    T = 282
#    Y = 1
#    Sequence has 553 bases
#    A = 119
#    C = 161
#    T = 131
#    G = 141
#    N = 1
#    Sequence has 1521 bases
#    A = 402
#    C = 196
#    T = 471
#    G = 215
#    N = 237
#    Sequence has 1285 bases
#    A = 327
#    Y = 1
#    C = 224
#    T = 371
#    G = 362
#    Sequence has 570 bases
#    A = 158
#    C = 120
#    T = 163
#    G = 123
#    N = 6
#    Sequence has 1801 bases
#    C = 376
#    A = 465
#    S = 1
#    T = 462
#    G = 497


for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    print("Sequence has", len(seq), "bases")
    counts = {}
    for base in seq:
      counts[base] = counts.get(base, 0) + 1
    
    keys = counts.keys()
    for i in keys:
        print(i, "=", counts[i])
