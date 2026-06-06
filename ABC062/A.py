x, y = map(int, input().split())
group1 = {1, 3, 5, 7, 8, 10, 12}
group2 = {4, 6, 9, 11}
group3 = {2}
def group(n):
  if n in group1:
    return 1
  if n in group2:
    return 2
  return 3
print("Yes" if group(x) == group(y) else "No")
