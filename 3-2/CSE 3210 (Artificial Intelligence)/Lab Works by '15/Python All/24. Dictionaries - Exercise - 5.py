#    Do the same as exercise 4 but this time use
#    /coursehome/dalke/sequences.seq
#    
#    Compare your results with someone else.
#    
#    Then try
#    /coursehome/dalke/many_sequences.seq
#    
#    Compare  results then compare how long it
#    took the program to run.  (See note on next page.)

import datetime
startTime = datetime.datetime.now()

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

endTime = datetime.datetime.now()
print(endTime - startTime)