import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    n = int(input())

    # f(6) = f(5) + f(4)
    # f(5) = f(4) + f(3)
    # f(4) = f(3) + f(2)
    # f(3) = f(2) + f(1)
    # f(2) = f(1) + f(0)

    a, b = 1, 0 # 0과 1 호출 횟수
    for i in range(n):
        a, b = b, a+b
    print(a, b)