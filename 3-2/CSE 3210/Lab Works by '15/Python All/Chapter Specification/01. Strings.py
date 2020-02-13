# All about strings

# Slide Name
print("Slide Name: Strings:")
print(), print(), print()



# Slide - 5
print("Slide - 5:")

s = "GATTACA"
print("s =", s)
print("s[0] =", s[0])
print("s[1] =", s[1])
print("s[-1] =", s[-1])
print("s[-2] =", s[-2])
# print("s[7] =", s[7])   //will cause error

print(), print(), print()



# Slide - 6
print("Slide - 6:")

print("s[1:3] =", s[1:3])
print("s[:3] =", s[:3])
print("s[4:] =", s[4:])
print("s[3:5] =", s[3:5])
print("s[:] =", s[:])
print("s[::2] =", s[::2])
print("s[-2:2:1] =", s[-2:2:-1])

print(), print(), print()



# Slide - 8
print("Slide - 8:")

s = "Okay, there\'s a small one."
print("s =", s)

print(), print(), print()



# Slide - 10
print("Slide - 10:")

print("len(\"GATTACA\") =", len("GATTACA"))
print("\"GAT\" + \"TACA\" =", "GAT" + "TACA")
print("\"A\" * 10 =", "A" * 10)
print("\"G\" in \"GATTACA\" =", "G" in "GATTACA")
print("\"GAT\" in \"GATTACA\" =", "GAT" in "GATTACA")
print("\"AGT\" in \"GATTACA\" =", "AGT" in "GATTACA")
print("\"GATTACA\".find(\"ATT\") =", "GATTACA".find("ATT"))
print("\"GATTACA\".count(\"T\") =", "GATTACA".count("T"))

print(), print(), print()



# Slide - 11
print("Slide - 11:")

# print("38"+5)   //will cause an error
print("int(\"38\")+5 =", int("38")+5)
print("\"38\"+str(5) =", "38"+str(5))
print("int(\"38\"), str(5) =", int("38"), str(5))
# print(float("2.71828"))   //will cause an error

print(), print(), print()



# Slide - 12
print("Slide - 12:")

s = "GATTACA"
print("s =", s)
# s[3] = "C"    //will cause error
s = s[:3] + "C" + s[4:]
print("s =", s)

print(), print(), print()



# Slide - 13
print("Slide - 13:")

print("\"GATTACA\".lower() =", "GATTACA".lower())
print("\"gattaca\".upper() =", "gattaca".upper())
print("\"GATTACA\".replace(\"G\", \"U\") =", "GATTACA".replace("G", "U"))
print("\"GATTACA\".replace(\"C\", \"U\") =", "GATTACA".replace("C", "U"))
print("\"GATTACA\".replace(\"AT\", \"**\") =", "GATTACA".replace("AT", "**"))
print("\"GATTACA\".startswith(\"G\") =", "GATTACA".startswith("G"))
print("\"GATTACA\".startswith(\"g\") =", "GATTACA".startswith("g"))

print(), print(), print()



# Slide - 14
print("Slide - 14:")

seq = input("Enter a DNA sequence: ")
print("seq.count(\"A\") =", seq.count("A"))
print("There are", seq.count("T"), "thymines")
print("\"ATA\" in seq =", "ATA" in seq)

substr = input("Enter a subsequence to find: ")
print(substr in seq)

print(), print(), print()



# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
