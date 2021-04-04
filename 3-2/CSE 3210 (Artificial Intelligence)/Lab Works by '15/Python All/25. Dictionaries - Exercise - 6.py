#    Write a program which prints the reverse
#    complement of each sequence from the file
#    /coursehome/dalke/10_sequences.seq
#    
#    This file contains only A, T, C, and G letters.

complement_table = {"A": "T", "T": "A", "C": "G", "G": "C"}

for seq in open("Chapter Specification/sequence.txt"):
    seq = seq.rstrip()
    new_seq = []
    for letter in seq:
        complement_letter = complement_table[letter]
        new_seq.append(complement_letter)
    
    new_seq.reverse()
    
    a = ""
    for i in new_seq:
        a = a+i
    print(a)