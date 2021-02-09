def main():
	x = int(input("How many numbers you want to see from fibonacci series? "))

	a,b = 0,1
	print(a)
	print(b)

	for x in range(0,x-2):
		s = a + b
		print(s)
		a = b
		b = s
		
main()

