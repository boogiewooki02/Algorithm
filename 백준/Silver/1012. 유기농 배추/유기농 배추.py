import sys
from collections import deque

input = sys.stdin.readline

T = int(input())
for _ in range(T):
    # m: 가로 길이
    # n: 세로 길이
    # k: 배추 개수
    m, n, k = map(int, input().split())
    s = set()
    for i in range(k):
        x, y = map(int, input().split())
        s.add((x, y))

    cnt = 0
    while s:
        start_node = next(iter(s))
        queue = deque([start_node]) # 한 묶음
        s.remove(start_node)

        while queue:
            x, y = queue.popleft()

            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy
                if (nx, ny) in s:
                    s.remove((nx, ny))
                    queue.append((nx, ny))

        cnt += 1

    print(cnt)