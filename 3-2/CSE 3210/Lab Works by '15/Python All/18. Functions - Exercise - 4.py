#    In Exercise 5 (”if and files”) asked you to write a program which counts the number of sequences with certain properties (eg, the number of sequences with length > 2000 and %GC > 50%). Redo that exercise but this time use a function for each of the tests.  The code should look something like:
#    
#    ... define the functions first ...
#    
#    num_over_1000 = 0  # initialize counters
#    
#    for line in open(...): 
#      seq = line.rstrip()
#      if is_over_1000(seq):
#        num_over_1000 = num_over_1000 + 1
#      ... other if cases ...
#    
#    ... print the results ...


def is_over_1000(seq):
    if len(seq) > 1000:
        return True
    return False

def CTATA_exists(seq):
    pos = seq.find("CTATA")
    if pos == -1:
        return False
    return True

def fifty_percent_GC(seq):
    if (seq.count("G")+seq.count("C"))/float(len(seq)) > 50.0:
        return True
    return False

def is_over_2000(seq):
    if len(seq) > 2000:
        return True
    return False

num_over_1000 = 0  # initialize counters
count = 0
num_of_CTATA = 0
GC_50_percent = 0
g_2000_and_50p_GC = 0


for line in open("Chapter Specification/sequence.txt"):
    seq = line.rstrip()
    count = count + 1
    if CTATA_exists(seq):
        num_of_CTATA = num_of_CTATA + 1
    if is_over_1000(seq):
        num_over_1000 = num_over_1000 + 1
    if fifty_percent_GC(seq):
        GC_50_percent = GC_50_percent + 1
    if fifty_percent_GC(seq) and is_over_2000(seq):
        g_2000_and_50p_GC = g_2000_and_50p_GC + 1
        
print("A.", count, "sequences are there.")
print("B.", num_of_CTATA, "sequences have a match of CTATA.")
print("C.", num_over_1000, "sequences have more than 1000 bases.")
print("D.", GC_50_percent, "sequences have more than 50%% GC composition.")
print("E.", g_2000_and_50p_GC, "sequences have more than 2000 bases and more than 50%% GC composition.")
