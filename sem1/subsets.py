n = 0
print("\nDla uproszczenia zbiory generowane są od 1 do n\n")
n = int(input("Podaj n: (ilość elementów zbioru) "))
mset = list(range(1,n+1))
binary = ['0'] * n
subsets = []
subsetsCount = pow(2, n)

for i in range(subsetsCount):
	byteindex = 0
	currentsubset = []
	for binarybyte in binary:
		if binarybyte == '1':
			currentsubset.append(mset[byteindex])
		byteindex+=1
	subsets.append(currentsubset)
	currentbinaryvalue = int('0b'+''.join(binary),2)
	currentbinaryvalue += 1
	binary = list(str(bin(currentbinaryvalue))[2:].zfill(n))

print("\n")	
for ids, subset in enumerate(subsets):
	print(f'{ids+1}: {subset}')
