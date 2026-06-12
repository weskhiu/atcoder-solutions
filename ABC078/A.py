X, Y = input().split()
a = int(X, 16)
b = int(Y, 16)
if a < b:
  print("<")
elif a > b:
  print(">")
else:
  print("=")
