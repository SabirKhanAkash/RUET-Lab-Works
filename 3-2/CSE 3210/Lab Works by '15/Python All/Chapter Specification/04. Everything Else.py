# All about everything else

# Slide Name
print("Slide Name: Everything Else:")
print(), print(), print()



# Slide - 3
print("Slide - 3:")

seq = "aaaaTaaaTaaT"
print("seq = ", seq)
print("seq.find(\"T\") = ", seq.find("T"))
print("seq.find(\"T\", 4) = ", seq.find("T", 4))
print("seq.find(\"T\", 5) = ", seq.find("T", 5))
print("seq.find(\"T\", 9) = ", seq.find("T", 9))
print("seq.find(\"T\", 12) = ", seq.find("T", 12))

print(), print(), print()



# Slide - 5
print("Slide - 5:")

pos = seq.find("T")
while pos != -1:
    print("T at index", pos)
    pos = seq.find("T", pos+1)

print(), print(), print()



# Slide - 7
print("Slide - 7:")

pos = -1
while 1:
    pos = seq.find("T", pos+1)
    if pos == -1:
        break
    print("T at index", pos)

print(), print(), print()



# Slide - 8
print("Slide - 8:")

sequences = []
for line in open("sequence.txt"):
    seq = line.rstrip()
    if seq.endswith("AA"):
        sequences.append(seq)
    if len(sequences) > 10:
        break
print(sequences)

print(), print(), print()



# Slide - 9
print("Slide - 9:")

def is_hot(weather):
    if weather == "hot":
        return True
    return False

def is_rainy(weather):
    if weather == "rainy":
        return True
    return False
    
def is_cold(weather):
    if weather == "cold":
        return True
    return False

def go_to_beach():
    print("Go to beach.")
    
def go_to_movies():
    print("Go to movies.")

def read_book():
    print("Read Book.")

def watch_television():
    print("Watch Television.")
    
weather = "normal"    # use "hot" or "rainy" or "cold" and see what happens
if is_hot(weather):
    go_to_beach()
elif is_rainy(weather):
    go_to_movies()
elif is_cold(weather):
    read_book() 
else:
    watch_television()

print(), print(), print()



# Slide - 10
print("Slide - 10:")

data = ("Cape Town", 2004, [])
print("data = ", data)
print("data[0] = ", data[0])
# data[0] = "Johannesburg"   //Will cause an error

print(), print(), print()



# Slide - 12
print("Slide - 12:")

name = "Andrew"
print("%s, come here" % name)

print(), print(), print()



# Slide - 14
print("Slide - 14:")

print("This is a string: %s" % "Yes, it is")
print("This is an integer: %d" % 10)
print("This is an integer: %4d" % 10)
print("This is an integer: %04d" % 10)
print("This is a float: %f" % 9.8)
print("This is a float: %.2f" % 9.8)

print(), print(), print()



# Slide - 15
print("Slide - 15:")

print("Name: %s, Age: %d, Language: %s" % ("Andrew", 33, "Python"))
# print("Name: %s, Age: %d, Language: %s" % ("Andrew", 33))   //will cause an error

print(), print(), print()



# Slide - 16
print("Slide - 16:")

d = {"name": "Andrew",
     "age": 33,
     "language": "Python"}

print("%(name)s is %(age)s years old. Yes, %(age)s." % d)

print(), print(), print()



# Slide - 18
print("Slide - 18:")

infile = open("sequence.txt")
outfile = open("sequence_small.txt", "w")

for line in infile:
    seq = line.rstrip()
    if len(seq) < 1000:
        outfile.write(seq)
        outfile.write("\n")

outfile.close()
infile.close()
print("Your file is ready, check the directory.")

print(), print(), print()


# Congrats
print("Congrats! You've successfully completed this reading (If you've :P).")
