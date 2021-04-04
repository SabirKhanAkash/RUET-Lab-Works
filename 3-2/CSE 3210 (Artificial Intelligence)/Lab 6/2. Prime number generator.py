def is_prime(num):
    if num == 0 or num == 1:
        return False
    for x in range(2, num):
        if num % x == 0:
            return False
    else:
        return True

def main():
	n = int(input("Generate prime numbers to Nth number, Enter the value of N: "))

	for x in range(0,n):
		if is_prime(x)==True:
			print(x)
		
main()

