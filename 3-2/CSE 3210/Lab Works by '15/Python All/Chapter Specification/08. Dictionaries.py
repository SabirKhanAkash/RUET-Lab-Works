# All about dictionaries

# Slide Name
print("Slide Name: Dictionaries:")
print(), print(), print()



# Slide - 6
print("Slide - 6:")

good_morning_dict = {
    "English": "Good morning",
    "Swedish": "God morgon",
    "German": "Guten morgen",
    "Venda": "Ndi matscheloni",
}
print("Good moerning in Swedish = ", good_morning_dict["Swedish"])

print(), print(), print()



# Slide - 7
print("Slide - 7:")

D1 = {}
print("len(D1) = ", len(D1))

D2 = {"name": "Andrew", "age": 33}
print("len(D2) = ", len(D2))

print("D2[\"name\"] = ", D2["name"])
print("D2[\"age\"] = ", D2["age"])
# print("D2[\"AGE\"] = ", D2["AGE"])  //causes error, keys are sensitive

print(), print(), print()



# Slide - 8
print("Slide - 8:")

my_sister = {}
my_sister["name"] = "Christy"
print("len =", len(my_sister), "and value is", my_sister)

my_sister["children"] = ["Maggie", "Porter"]
print("len =", len(my_sister), "and value is", my_sister)

print(), print(), print()



# Slide - 9
print("Slide - 9:")

city = {"name": "Cape Town", "country": "South Africa",
        "population": 2984000, "lat.": -33.93, "long.": 18.46}
print(city.keys())
print(city.values())
print()

for k in city:
    print(k, "=", city[k])

print(), print(), print()



# Slide - 10
print("Slide - 10:")

D = {"name": "Johann", "city": "Cape Town"}
D["city"] = "Johannesburg"
print("D", D)

del D["name"]
print("D", D)

D["name"] = "Dan"
print("D", D)

D.clear()
print("D", D)

print(), print(), print()



# Slide - 12
print("Slide - 12:")

seq = "TKKAMRCRAATARKWC"
A = seq.count("A")
B = seq.count("B")
C = seq.count("C")
D = seq.count("D")
G = seq.count("G")
H = seq.count("H")
K = seq.count("K")
M = seq.count("M")
N = seq.count("N")
R = seq.count("R")
S = seq.count("S")
T = seq.count("T")
V = seq.count("V")
W = seq.count("W")
Y = seq.count("Y")
print("A =", A, "| B =", B, "| C =", C, "| D =", D, "| G =", G, "| H =", H, "| K =", K, "| M =", M, "| N =", N, "| R =", R, "| S =", S, "| T =", T, "| V =", V, "| W =", W, "| Y =", Y)

print(), print(), print()


# Slide - 13
print("Slide - 13")

seq = "TKKAMRCRAATARKWC"
counts = {}
counts["A"] = seq.count("A")
counts["B"] = seq.count("B")
counts["C"] = seq.count("C")
counts["D"] = seq.count("D")
counts["G"] = seq.count("G")
counts["H"] = seq.count("H")
counts["K"] = seq.count("K")
counts["M"] = seq.count("M")
counts["N"] = seq.count("N")
counts["R"] = seq.count("R")
counts["S"] = seq.count("S")
counts["T"] = seq.count("T")
counts["V"] = seq.count("V")
counts["W"] = seq.count("W")
counts["Y"] = seq.count("Y")
print(counts)

print(), print(), print()



# Slide - 14
print("Slide - 14:")

seq = "TKKAMRCRAATARKWC"
counts = {}
for base in seq:
    if base not in counts:
        n = 0
    else:
        n = counts[base]
    counts[base] = n + 1

print(counts)

print(), print(), print()



# Slide - 15
print("Slide - 15:")

seq = "TKKAMRCRAATARKWC"
counts = {}
for base in seq:
  counts[base] = counts.get(base, 0) + 1
print(counts)

print("counts.get(\"A\", 9) =", counts.get("A", 9))
# print("counts[\"B\"] =", counts["B"])   //occurs error
print("counts.get(\"B\", 9) =", counts.get("B", 9))

print(), print(), print()



# Slide - 16
print("Slide - 16:")

complement_table = {"A": "T", "T": "A", "C": "G", "G": "C"}
seq = "CCTGTATT"
new_seq = []
for letter in seq:
    complement_letter = complement_table[letter]
    new_seq.append(complement_letter)
print(new_seq)

new_seq.reverse()
print(new_seq)
print("".join(new_seq))

print(), print(), print()



# Slide - 17
print("Slide - 17:")

seq = "TCTCCAAGACGCATCCCAGTG"
print("seq[0:3] =", seq[0:3])
print("seq[3:6] =", seq[3:6])
print("seq[6:9] =", seq[3:9])
print()

print(list(range(0, len(seq), 3)))
print()
for i in range(0, len(seq), 3):
    print("Codon", int(i/3), "is", seq[i:i+3])

print(), print(), print()



# Slide - 18
print("Slide - 18:")

seq = "TCTCCAA"
for i in range(0, len(seq), 3):
    print("Base", int(i/3), "is", seq[i:i+3])

print(), print(), print()



# Slide - 19
print("Slide - 19:")

print("0 % 3 =", 0 % 3)
print("1 % 3 =", 1 % 3)
print("2 % 3 =", 2 % 3)
print("3 % 3 =", 3 % 3)
print("4 % 3 =", 4 % 3)
print("5 % 3 =", 5 % 3)
print("6 % 3 =", 6 % 3)

print(), print(), print()



# Slide - 20
print("Slide - 20:")

if len(seq) % 3 != 0:
     print("Will not process the sequence")
else:
     print("Will process the sequence")
print()

seq = "TCTCCAA"
for i in range(0, len(seq) - len(seq)%3, 3):
    print("Base", int(i/3), "is", seq[i:i+3])

print(), print(), print()



# Slide - 21
print("Slide - 21:")

seq = "TCTCCAAGACGCATCCCAGTG"
codon_counts = {}
for i in range(0, len(seq) - len(seq)%3, 3):
    codon = seq[i:i+3]
    codon_counts[codon] = codon_counts.get(codon, 0) + 1

print(codon_counts)

print(), print(), print()



# Slide - 22
print("Slide - 22:")

codon_counts = {'ATC': 1, 'GTG': 1, 'TCT': 1, 'AGA': 1, 'CCA': 2, 'CGC': 1}
codons = codon_counts.keys()
print(codons)

codons = sorted(codons)
print(codons)

for codon in codons:
    print(codon, "=", codon_counts[codon])

print(), print(), print()



# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
