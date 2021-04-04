#    Look at your DNA to protein translation program.
#    
#    Identify the parts that could be turned into a function.  Modify your program accordingly.  When finished, ask me to review what you did.

def check(i, j):
    while i+5 <= j:
        if seq[i:i+5] in "FILAPVM":
            print("Hydrophobic signal")
            break
        if i+5 == j:
            print("No hydrophobic signal")
        i=i+1
    
    if j < 5:
        print("No hydrophobic signal")

while 1:
    seq = input("Protein sequence? ")
    if seq == "*":
        break
    i = 0
    j = len(seq)
    check(i,j)