N = int(input())
nums = [8, 4, 2, 1]
result = [0] * 10
k = 0
for x in nums:
  while N >= x:
    result[k] = x
    N -= x
    k += 1
print(k)
for i in range(k):
    print(result[i])
