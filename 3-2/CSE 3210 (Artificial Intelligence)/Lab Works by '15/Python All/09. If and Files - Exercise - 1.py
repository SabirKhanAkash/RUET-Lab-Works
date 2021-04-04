#    Get a sequence from the user.  If there is an A in the sequence, print the number of times it appears in the sequence.  Do the same for T, C and G.  If a base does not exist, don’t print anything.
#    
#    Test input #1:
#    Enter a sequence: ACCAGGCA      
#    A count: 3
#    C count: 3
#    G count: 2
#    
#    Test input #2:
#    Enter a sequence: TTTTTGGGG
#    T count: 5
#    G count: 4

seq = input("Enter a sequence: ")
fields = ["A", "T", "C", "G"]

for s in fields:
    if seq.count(s) != 0:
        print(s, "count:", seq.count(s))