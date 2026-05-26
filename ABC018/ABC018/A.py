A = int(input())
B = int(input())
C = int(input())
rankA = 1
rankB = 1
rankC = 1
if B > A: rankA += 1
if C > A: rankA += 1
if A > B: rankB += 1
if C > B: rankB += 1
if A > C: rankC += 1
if B > C: rankC += 1
print(rankA)
print(rankB)
print(rankC)
