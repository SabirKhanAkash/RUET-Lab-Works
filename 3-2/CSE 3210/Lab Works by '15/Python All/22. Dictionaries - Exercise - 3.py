#    Modify your program from Exercise 2 so the base counts are printed in alphabetical order.  (Use the keys method of the dictionary to get a list, then use the sort method of the list.)
#    
#    The first sequence output should write
#    Sequence has 1267 bases
#    A = 287
#    B = 1
#    C = 306
#    G = 389
#    R = 1
#    T = 282
#    Y = 1

for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    print("Sequence has", len(seq), "bases")
    counts = {}
    for base in seq:
      counts[base] = counts.get(base, 0) + 1
    
    keys = counts.keys()
    keys = sorted(keys)
    for i in keys:
        print(i, "=", counts[i])
