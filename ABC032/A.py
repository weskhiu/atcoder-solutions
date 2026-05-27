import math
a = int(input())
b = int(input())
n = int(input())
l = a * b // math.gcd(a, b)
k = (n + l - 1) // l
print(l * k)
