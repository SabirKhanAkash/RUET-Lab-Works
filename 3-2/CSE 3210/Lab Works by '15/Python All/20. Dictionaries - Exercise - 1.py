#    Ask the user for a sequence.  The sequence may include ambiguous codes (letters besides A, T, C or G).  Use a dictionary to find the number of times each letter is found.
#    
#    Test case #1
#    Enter DNA: ACRSAS
#    A = 2
#    C = 1
#    R = 2
#    S = 2
#    
#    Test case #2
#    Enter DNA: TACATCGATGCWACTN
#    A = 4
#    C = 4
#    G = 2
#    N = 1
#    T = 4
#    W = 1

seq = input("Enter DNA: ")
counts = {}
for base in seq:
  counts[base] = counts.get(base, 0) + 1

keys = counts.keys()
keys = sorted(keys)
for i in keys:
    print(i, "=", counts[i])
