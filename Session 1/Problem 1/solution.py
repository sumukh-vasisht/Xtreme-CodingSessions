from math import factorial

n = int(input())

for i in range(n):
    numberOfWays=int(input())
    for n in range(1, 1000):
        if factorial(2 * (n)) // (factorial(n + 1) * factorial(n)) == numberOfWays:
            print(n+2)
    