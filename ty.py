from math import factorial
a=int(input())
if a%2!=0:
        print(0)
else:
        print(((factorial(a))/(factorial(a//2)*factorial(a//2)))**2)
