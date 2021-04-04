# Modify the program to allow both lower-case and upper-case characters in the sequence

#Enter a sequence: ATTgtc
#It is 6 bases long
#adenine: 1
#thymine: 3
#cytosine: 1
#guanine: 1


seq = input("Enter a sequence: ")
seq = seq.upper()
print("It is", len(seq), "bases long")

print("adenine:", seq.count("A"))
print("thymine:", seq.count("T"))
print("cytosine:", seq.count("C"))
print("guanine:", seq.count("G"))