str1 = input("Enter your String of words with spaces: ")

words = str1.split()
words = list(reversed(words))

print(" ".join(words))