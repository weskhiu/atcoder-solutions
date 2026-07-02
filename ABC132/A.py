S = input()
T = ''.join(sorted(S))
if T[0] != T[3] and T[0] == T[1] and T[2] == T[3]:
    print("Yes")
else:
    print("No")
