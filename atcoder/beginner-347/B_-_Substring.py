import sys
input = sys.stdin.readline

s = input()
s = s[:-1]
res = set([s[i: j] for i in range(len(s))
          for j in range(i + 1, len(s) + 1)])

print(len(res))
