for _ in range(int(input())):
    N = int(input())
    S = input()

    if N & 1:
        if S <= S[::-1]:
            print(S + S[::-1])
        else:
            print(S)
    else:
        if S <= S[::-1]:
            print(S)
        else:
            print(S[::-1] + S)
