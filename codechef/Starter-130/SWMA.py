import sys
input = sys.stdin.readline

for _ in range(int(input())):
    a, b = input().split()

    print("Yes" if (max(int(a), int(a[::-1])) > min(int(b), int(b[::-1]))) else "No")
