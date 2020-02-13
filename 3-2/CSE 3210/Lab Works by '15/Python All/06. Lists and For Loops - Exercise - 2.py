#    Write a program that asks for a sequence then numbers each base, one base per line.

# =============================================================================
#     Enter a sequence: GTTCAG
#     base 0 is G
#     base 1 is T
#     base 2 is T
#     base 3 is C
#     base 4 is A
#     base 5 is G
# =============================================================================

seq = input("Enter a sequence: ")
i=0

for i in range(len(seq)):
   print("base", i+1, "is", seq[i])
