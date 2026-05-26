A = int(input())
B = int(input())
C = int(input())
scores = [A, B, C]
sorted_scores = sorted(scores, reverse=True)
for s in scores:
  print(sorted_scores.index(s) + 1)
