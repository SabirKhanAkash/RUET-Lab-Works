# All about lists and for loop

# Slide Name
print("Slide Name: Lists and 'for' loops:")
print(), print(), print()



# Slide - 2
print("Slide - 2 (Lists):")

data = []
print("data (when empty) = ", data)

data.append("Hello!")
print("data (after appending \"Hello!\") = ", data)

data.append(5)
print("data (after appending 5) = ", data)

data.append([9,8,7])
print("data (after appending [9,8,7]) = ", data)

data.extend([4,5,6])
print("data (after extending [4,5,6]) = ", data)

print(), print(), print()



# Slide - 3
print("Slide - 3 (Lists and strings are similar):")

s = "ATCG"
print("s = ", s)
print("s[0] = ", s[0])
print("s[-1] = ", s[-1])
print("s[2:] = ", s[2:])
print("C in s = ", "C" in s)
print("s*3 = ", s*3)
# print(s[9])  //will cause an error "string index out of range"

L = ["adenine", "thymine", "cytosine", "guanine"]
print("L = ", L)
print("L[0] = ", L[0])
print("L[-1] = ", L[-1])
print("L[2:] = ", L[2:])
print("cytosine in s: ", "cytosine" in L)
print("L*3 = ", L*3)
# print(L[9])  //will cause an error "unexpected indent"

print(), print(), print()



# Slide - 4
print("Slide - 4 (But lists are mutable):")

s = "ATCG"
print("s = ", s)
# s[1]="U"   //will cause an error as strings are immutable
# s.reverse()   //will cause an error as there's no such function
print("s[::-1] = ", s[::-1])
print("s = ", s)

L = ["adenine", "thymine", "cytosine", "guanine"]
print("L = ", L)

L[1] = "uracil"
print("L (after applying L[1] = \"uracil\") = ", L)

L.reverse()
print("L (after applying L.reverse()) = ", L)

del L[0]
print("L (after deleting L[0]) = ", L)

print(), print(), print()



# Slide - 5
print("Slide - 5 (Lists can hold any object):")

L = ["", 1, "two", 3.0, ["quatro", "fem", [6j], [] ]]
print("L = ", L)
print("len(L) = ", len(L))
print("len(L[-1]) = ", len(L[-1]))
print("L[-1][-1] = ", L[-1][-1])
print("len(L[-1][-1]) = ", len(L[-1][-1]))

print(), print(), print()



# Slide - 6
print("Slide - 6 (A few more methods):")

L = ["thymine", "cytosine", "guanine"]
print("L = ", L)

L.insert(0, "adenine")
print("L (after insert(0, \"adenine\"))= ", L)

L.insert(2, "uracil")
print("L (after insert(2, \"uracil\"))= ", L)
print("L[:2] = ", L[:2])

L[:2] = ["A", "T"]
print("L (after executing L[:2] = [\"A\", \"T\"]) = ", L)

L[:2] = []
print("L (after executing L[:2] = []) = ", L)

L[:] = ["A", "T", "C", "G"]
print("L (after executing L[:] = [\"A\", \"T\", \"C\", \"G\"]) = ", L)

print(), print(), print()



# Slide - 7
print("Slide - 7 (Turn a string into a list):")

s = "AAL532906 aaaatagtcaaatatatcccaattcagtatgcgctgagta"
print("s = ", s)

i = s.find(" ")
print("s[:i] (after i = s.find(\" \")) = ", s[:i])
print("s[i+1:] = ", s[i+1:])

fields = s.split()
print("fields (after fields = s.split()) = ", fields)
print("fields[0] = ", fields[0])
print("len(fields[1]) = ", len(fields[1]))

print(), print(), print()



# Slide - 8
print("Slide - 8 (More split examples):")

protein = "ALA PRO ILU CYS"
print("protein = ", protein)

residues = protein.split()
print("residues (after equaling to protein.split()) = ", residues)

protein = " ALA     PRO    ILU CYS  \n"
print("protein = ", protein)
print("protein.split() = ", protein.split())
print("\"HIS-GLU-PHE-ASP\".split(\"-\") = ", "HIS-GLU-PHE-ASP".split("-"))

print(), print(), print()



# Slide - 9
print("Slide - 9 (Turn a list into a string):")

L1 = ["Asp", "Gly", "Gln", "Pro", "Val"]
print("L1 = ", L1)
print("\"-\".join(L1) = ", "-".join(L1))
print("\"**\".join(L1) = ", "**".join(L1))
print("\"\\n\".join(L1) = ", "\n".join(L1))

print(), print(), print()



# Slide - 10
print("Slide - 10 (The 'for' loop):")

L = ["Andrew", "Tsanwani", "Arno", "Tebogo"]
print("L = ", L)
for name in ["Andrew", "Tsanwani", "Arno", "Tebogo"]:
    print("Hello,", name)

print(), print(), print()



# Slide - 12
print("Slide - 12 (A two line block):")

L = ["Andrew", "Tsanwani", "Arno", "Tebogo"]
print("L = ", L)
for name in ["Andrew", "Tsanwani", "Arno", "Tebogo"]:
    print("Hello,", name)   # //Be careful about indentation
    print("Your name is", len(name), "letters long")

print(), print(), print()



# Slide - 14
print("Slide - 14 ('for' works on strings):")

seq = "ATGCATGTCGC"
print("seq = ", seq)

for letter in seq:
    print("Base:", letter)

print(), print(), print()



# Slide - 15
print("Slide - 15 (Numbering bases):")

seq = "ATGCATGTCGC"
print("seq = ", seq)

n = 0
for letter in seq:
    print("base", n, "is", letter)
    n = n + 1

print("The sequence has", n, "bases")

print(), print(), print()



# Slide - 16
print("Slide - 16 (The range function):")

print("range(5) = ", list(range(5)))
print("range(8) = ", list(range(8)))
print("range(2, 8) = ", list(range(2,8)))
print("range(0, 8, 1) = ", list(range(0,8,1)))
print("range(0, 8, 2) = ", list(range(0,8,2)))
print("range(0, 8, 3) = ", list(range(0,8,3)))
print("range(0, 8, 4) = ", list(range(0,8,4)))
print("range(0, 8, -1) = ", list(range(0,8,-1)))
print("range(8, 0, -1) = ", list(range(8,0,-1)))

print(), print(), print()



# Slide - 17
print("Slide - 17 (Do something 'N' times):")

for i in range(3):
    print("If I tell you three times it must be true.")
print()

for i in range(4):
    print(i, "squared is", i*i, "and cubed is", i*i*i)
    
print(), print(), print()



# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
