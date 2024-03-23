startValue = 200
endValue = 300

#validate
if endValue<startValue:
    print("endValue can't be smaller than startValue")
    exit()
elif startValue<0 or endValue<0:
    print("values can't be less than 0")
    exit()

for number in range(startValue, endValue+1):
    sumOfDividersOfNumber = 0

    for i in range(1, number+1):
        if number%i==0 and not number==i:
            sumOfDividersOfNumber += i

    for comparedNumber in range(startValue, endValue+1):
        if not number==comparedNumber:
            sumOfDividersOfComparedNumber = 0

            for i in range(1, comparedNumber+1):
                if comparedNumber%i==0 and not comparedNumber==i:
                    sumOfDividersOfComparedNumber += i
            
            if sumOfDividersOfNumber == comparedNumber and number == sumOfDividersOfComparedNumber:
                print(str(number)+" "+str(comparedNumber))
        