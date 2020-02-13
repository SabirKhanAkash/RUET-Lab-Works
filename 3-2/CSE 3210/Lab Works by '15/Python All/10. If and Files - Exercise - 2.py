#    Get a sequence from the user.  If there is an A in the sequence, print the number of times it appears in the sequence.  If it does not exist, print “A not found”.  Do the same for T, C and G.
#
#    Test input #1:
#    Enter a sequence: ACCAGGCA
#    A count: 3
#    T not found
#    C count: 3
#    G count: 2
#
#    Test input #2:
#    Enter a sequence: TTTTTGGGG
#    A not found
#    T count: 5
#    C not found
#    G count: 4

seq = input("Enter a sequence: ")
fields = ["A", "T", "C", "G"]

for s in fields:
    if seq.count(s) != 0:
        print(s, "count:", seq.count(s))
    else:
        print(s, "not found")