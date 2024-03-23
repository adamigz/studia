n = 5

people = list(range(1, n+1))

i=n-1

while len(people)>1:
    people.pop(i-1)
    i -= 2
    if i<0:
        i = len(people)+i