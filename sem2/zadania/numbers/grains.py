def square(number):
    if number > 0 and number < 65:
        if number == 1:
            return 1
        else:
            return square(number-1)*2
    else:
        raise ValueError("square must be between 1 and 64")

        


def total():
    sum = 0
    for i in range(1,65):
        sum += square(i)
    return sum
        

