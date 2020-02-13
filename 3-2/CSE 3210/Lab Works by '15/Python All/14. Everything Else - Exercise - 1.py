#    The hydrophobic residues are [FILAPVM].
#    Write a program which asks for a protein sequence and prints “Hydrophobic signal” if (and only if) it has at least 5 hydrophobic residues in a row.  Otherwise print “No hydrophobic signal.”
#    
#    Protein sequence? FILAEPVM
#    No hydrophobic signal
#    
#    Protein sequence? FILA
#    No hydrophobic signal
#    
#    Protein sequence? QQPLIMAW
#    Hydrophobic signal
#    
#    Protein sequence? AA        
#    No hydrophobic signal
#    
#    Protein sequence? AAAAAAAAAA
#    Hydrophobic signal
#    
#    Protein sequence? AAFILAPILA 
#    Hydrophobic signal
#    
#    Protein sequence? ANDREWDALKE
#    No hydrophobic signal

while 1:
    seq = input("Protein sequence? ")
    if seq == "*":
        break
    i = 0
    j = len(seq)
    
    while i+5 <= j:
        if seq[i:i+5] in "FILAPVM":
            print("Hydrophobic signal")
            break
        if i+5 == j:
            print("No hydrophobic signal")
        i=i+1
    
    if j < 5:
        print("No hydrophobic signal")