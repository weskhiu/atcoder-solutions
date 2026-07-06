A, B, C = map(int, input().split())
space = A - B
if C <= space:
  print(0)
else:
  print(C - space)
