# Modify the program to print the number of unknown characters in the sequence

#Enter a sequence: ATTU*gtc
#It is 8 bases long
#adenine: 1
#thymine: 3
#cytosine: 1
#guanine: 1
#unknown: 2


seq = input("Enter a sequence: ")
seq = seq.upper()
print(seq)
print("It is", len(seq), "bases long")

print("adenine:", seq.count("A"))
print("thymine:", seq.count("T"))
print("cytosine:", seq.count("C"))
print("guanine:", seq.count("G"))
print("unknown:", len(seq)-seq.count("A")-seq.count("T")-seq.count("C")-seq.count("G"))
