startValue = 0
endValue = 10

#validate
if endValue<startValue:
    print("endValue can't be smaller than startValue")
    exit()
elif startValue<0 or endValue<0:
    print("values can't be less than 0")
    exit()

for number in range(startValue, endValue+1):
    isPrime = True

    if number == 1 or number == 0: isPrime = False

    for i in range(2, int(number/2)):
        if number%i==0:
            isPrime = False
        
    if isPrime: print(str(number)+" ")

