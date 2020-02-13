# Modify the program so it also prints the number of A, T, C, and G characters in the sequence

#Enter a sequence: ATTAC
#It is 5 bases long
#adenine: 2
#thymine: 2
#cytosine: 1
#guanine: 0


seq = input("Enter a sequence: ")
print("It is", len(seq), "bases long")

print("adenine:", seq.count("A"))
print("thymine:", seq.count("T"))
print("cytosine:", seq.count("C"))
print("guanine:", seq.count("G"))