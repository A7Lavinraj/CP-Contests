import sys
input = sys.stdin.readline

w, b = map(int, input().split())
s = "wbwbwwbwbwbw"*20;

for i in range(len(s)):
    x, y = 0, 0
    for j in range(i, len(s)):
        x += s[j]=='w'
        y += s[j]=='b'

        if x == w and y == b:
            print("Yes")
            exit(0)

else:
    print("No")
