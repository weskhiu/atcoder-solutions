S = input()
N = int(input())
first = S[(N - 1) //  5]
second = S[(N - 1) % 5]
print(first + second)
