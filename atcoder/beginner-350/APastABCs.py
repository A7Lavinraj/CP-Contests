import sys
input = sys.stdin.readline

s = input()
print("Yes" if int(s[-4:]) >= 1 and int(s[-4:]) <= 349 and int(s[-4:]) != 316 else "No")
