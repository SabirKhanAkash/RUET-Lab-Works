# Write a program that asks for a sequence (use the raw_input function) then prints it 10 times.  Include the loop count in the output

#Enter a sequence: TACG
#0 TACG
#1 TACG
#2 TACG
#3 TACG
#4 TACG
#5 TACG
#6 TACG
#7 TACG
#8 TACG
#9 TACG

seq = input("Enter a sequence: ")

for i in range(10):
    print(i, seq)