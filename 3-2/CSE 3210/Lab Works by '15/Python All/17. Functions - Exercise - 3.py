#    Use the count_bases function defined earlier to reimplement Exercise 1 from yesterday (Slide-3).
#    (That was the one which asked for a sequence using raw_input then printed the result.)

#    Use the count_bases function defined earlier to reimplement Exercise 2 from yesterday. (Slide-3)   (That was the one which printed count statistics for every sequence in a data file.)

def count(seq):
    fields = ["A", "T", "C", "G"]

    for s in fields:
        if seq.count(s) != 0:
            print(s, "count:", seq.count(s))
            
def count2(seq):
    fields = ["A", "T", "C", "G"]
    
    for s in fields:
        if seq.count(s) != 0:
            print(s, "count:", seq.count(s))
        else:
            print(s, "not found")
            
seq = input("Enter a sequence: ")
count(seq)
print()
count2(seq)