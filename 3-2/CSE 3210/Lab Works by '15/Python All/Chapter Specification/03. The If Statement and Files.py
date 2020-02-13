# All about if statements and files

# Slide Name
print("Slide Name: The if Statement and Files:")
print(), print(), print()



# Slide - 2
print("Slide - 2:")

test=50
if test:
    print("The expression is true")

print(), print(), print()



# Slide - 3
print("Slide - 3:")

if "GAATTC" in "ATCTGGAATTCATCG":
    print("EcoRI sight is present")
    
print(), print(), print()



# Slide - 6
print("Slide - 6:")

if "GAATTC" not in "AAAAAAAAAAAAAAA":
    print("EcoRI will not cut the sequesnce")

if not "GAATTC" in "AAAAAAAAAAAAAAA":
    print("EcoRI will not cut the sequesnce")

print(), print(), print()



# Slide - 7
print("Slide - 7:")

x = True
print("x = ", x)
print("not x = ", not x)

print(), print(), print()



# Slide - 9
print("Slide - 9:")

if "GAATTC" in "ATCTGGAATTCATCG":
    print("EcoRI sight is present")
else:
    print("EcoRI will not cut the sequence")

if "GAATTC" in "AAAACTCGT":
    print("EcoRI sight is present")
else:
    print("EcoRI will not cut the sequence")

print(), print(), print()



# Slide - 10
print("Slide - 10:")

seq = "ATCTGGAATTCATCG"
print("seq = ", seq)
print("seq.find(\"GAATTC\") = ", seq.find("GAATTC"))
print("seq.find(\"GGCGC\") = ", seq.find("GGCGC"))

print(), print(), print()



# Slide - 11
print("Slide - 11:")

seq = "ATCTGGAATTCATCG"
pos = seq.find("GAATTC")

if pos == -1:
    print("EcoRI does not cut the sequence")
else:
    print("EcoRI site starting at index", pos)

print(), print(), print()



# Slide - 20
print("Slide - 20:")

restriction_sites = [
    "GAATTC",   # EcoRI
    "GGATCC",   # BamHI
    "AAGCTT",   # HinDIII
]

seq = input("Enter a DNA sequence: ")  # AATGAATTCTCTGGAAGCTTA

for site in restriction_sites:
    if site in seq:
        print(site, "is a cleavage site")
    else:
        print(site, " is not present")

print(), print(), print()



# Slide - 28
print("Slide - 28:")

infile = open("sequence.txt")
print("infile = ", infile)

print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());
print("infile.readline() = ", infile.readline());

print(), print(), print()



# Slide - 29
print("Slide - 29:")

filename = "sequence.txt"
for line in open(filename):
    print(line[:10])

print(), print(), print()



# Slide - 30
print("Slide - 30 :")

filename = "sequence.txt"
for line in open(filename):
    line = line.rstrip()
    if line.startswith("C"):
        print(line)

print(), print(), print()



# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
