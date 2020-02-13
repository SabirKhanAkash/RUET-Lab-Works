#    Write a program to ask for a DNA sequence.
#    Translate the DNA into protein.  (See next page for the codon table to use.)  When the codon doesn’t code for anything (eg, stop codon), use “*”.  Ignore the extra bases if the sequence length is not a multiple of 3.  Decide how you want to handle ambiguous codes.
#    
#    Come up with your own test cases.  Compare your
#    results with someone else or with a web site.


table = {
     'TTT': 'F', 'TTC': 'F', 'TTA': 'L', 'TTG': 'L', 'TCT': 'S',
     'TCC': 'S', 'TCA': 'S', 'TCG': 'S', 'TAT': 'Y', 'TAC': 'Y',
     'TGT': 'C', 'TGC': 'C', 'TGG': 'W', 'CTT': 'L', 'CTC': 'L',
     'CTA': 'L', 'CTG': 'L', 'CCT': 'P', 'CCC': 'P', 'CCA': 'P',
     'CCG': 'P', 'CAT': 'H', 'CAC': 'H', 'CAA': 'Q', 'CAG': 'Q',
     'CGT': 'R', 'CGC': 'R', 'CGA': 'R', 'CGG': 'R', 'ATT': 'I',
     'ATC': 'I', 'ATA': 'I', 'ATG': 'M', 'ACT': 'T', 'ACC': 'T',
     'ACA': 'T', 'ACG': 'T', 'AAT': 'N', 'AAC': 'N', 'AAA': 'K',
     'AAG': 'K', 'AGT': 'S', 'AGC': 'S', 'AGA': 'R', 'AGG': 'R',
     'GTT': 'V', 'GTC': 'V', 'GTA': 'V', 'GTG': 'V', 'GCT': 'A',
     'GCC': 'A', 'GCA': 'A', 'GCG': 'A', 'GAT': 'D', 'GAC': 'D',
     'GAA': 'E', 'GAG': 'E', 'GGT': 'G', 'GGC': 'G', 'GGA': 'G',
     'GGG': 'G', }

outfile = open("Chapter Specification/dna to protein.txt", "w")
for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    new_seq = ""
    i=0
    while 1:
        if i+3 >= len(seq):
            break
        sub_str = seq[i] + seq[i+1] + seq[i+2]
        i=i+3
        keys = table.keys()
        keys = list(keys)

        if sub_str in keys:
            tmp = table[sub_str]
        else:
            tmp = "*"
        new_seq = new_seq + tmp
    
    print(new_seq)
    outfile.write(new_seq + "\n")

outfile.close()