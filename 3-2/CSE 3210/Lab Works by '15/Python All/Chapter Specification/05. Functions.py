# All about functions

# Slide Name
print("Slide Name: Functions:")
print(), print(), print()



# Slide - 2
print("Slide - 2:")

print("len(\"ATGGTGA\")= ", len("ATGGTGA"))
print("abs(-6) = ", abs(-6))
print("float(\"3.141500\") = ", float("3.141500"))

print(), print(), print()



# Slide - 3
print("Slide - 3:")

def hello():
    print("Hello, how are you?")
hello()

print(), print(), print()



# Slide - 14
print("Slide - 14:")

def hello(name):
    print("Hello", name);
hello("Andrew")

print(), print(), print()



# Slide - 18
print("Slide - 18:")

def subtract(x, y):
    print("x-y =", x-y)
subtract(8, 5)

print(), print(), print()



# Slide - 20
print("Slide - 20:")

x = subtract(8,5)
print("x", x)

print(), print(), print()



# Slide - 21
print("Slide - 21:")

def subtract(x, y):
    return x-y;
x = subtract(8, 5);
print("x =", x)

print(), print(), print()



# Slide - 22
print("Slide - 22:")

seq = "ATGCATGATGCATGAAAGGTCG"
counts = {}
for base in seq:     
  if base not in counts:
    counts[base] = 1
  else:
    counts[base] = counts[base] + 1

for base in counts:
  print(base, "=", counts[base])

print(), print(), print()



# Slide - 33
print("Slide - 33:")

def count_bases(seq):
  counts = {}
  for base in seq:     
    if base not in counts:
      counts[base] = 1
    else:
      counts[base] = counts[base] + 1
  return counts

input_seq = "ATGCATGATGCATGAAAGGTCG"
results = count_bases(input_seq)
for base in results:
  print(base, "=", results[base])

print(), print(), print()



# Slide - 34
print("Slide - 34:")

input_seq = "ATATC"
results = count_bases(input_seq)
print("results = ", results)

input_seq = "ATATCQGAC"
results = count_bases(input_seq)
print("results = ", results)

input_seq = ""
results = count_bases(input_seq)
print("results = ", results)

print(), print(), print()



# Slide - 35
print("Slide - 35:")

def gc_content(seq):
    counts = count_bases(seq)
    return (counts["G"]+counts["C"])/float(len(seq))
print("gc_content(\"CGAATT\") = ", gc_content("CGAATT"))

print(), print(), print()



# Slide - 36
print("Slide - 36:")

def polyA_tail(seq):
    if seq.endswith("AAAAAA"):
        return True
    else: 
        return False
 
if polyA_tail("ATGCTGTCGATGAAAAAAA"):
    print("Has a poly-A tail")
    
print(), print(), print()



# Slide - 37
print("Slide - 37:")

def split_into_codons(seq):
    codons = []
    for i in range(0, len(seq)-len(seq)%3, 3):
        codons.append(seq[i:i+3])
    return codons
 
for codon in split_into_codons("ATGCATGCATGCATGCATGC"):
    print("Codon", codon)

print(), print(), print()



# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
