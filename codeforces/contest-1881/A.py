import collections, math, functools

for testcase in range(int(input())):
    N, M = map(int, input().split(' '))
    X = input()
    S = input()

    answer = 0;

    for _ in range(10):
        if S in X:
            print(answer)
            break
        X += X
        answer += 1;
    else:
        print(-1);
