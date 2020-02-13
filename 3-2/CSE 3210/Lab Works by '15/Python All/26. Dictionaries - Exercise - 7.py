#    Modify the program from Exercise 6 to find the
#    reverse complement of an ambiguous DNA sequence.
#    (See next page for the data table.)
#    Test it against /coursehome/dalke/sequences.seq
#    Compare your results with someone else.
#    
#    To do that, run the program from the cmd and have it save your output to a file.  Compare using 'COMP'.
#    
#    python your_file.py > output.dat
#    COMP output.dat output2.dat

ambiguous_dna_complement = {
    "A": "T",
    "C": "G",
    "G": "C",
    "T": "A",
    "M": "K",
    "R": "Y",
    "W": "W",
    "S": "S",
    "Y": "R",
    "K": "M",
    "V": "B",
    "H": "D",
    "D": "H",
    "B": "V",
    "N": "N",
}

outfile = open("Chapter Specification/reverse complemented sequence.txt", "w")
for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    new_seq = []
    for letter in seq:
        complement_letter = ambiguous_dna_complement[letter]
        new_seq.append(complement_letter)
    
    new_seq.reverse()
    
    a = ""
    for i in new_seq:
        a = a+i
    a = a + "\n"
    outfile.write(a)

outfile.close()