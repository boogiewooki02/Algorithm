# 11279번 실버2

import heapq
import sys

input = sys.stdin.readline
arr = []

n = int(input())

for _ in range(n):
  x = int(input())
  if x == 0:
    if len(arr) == 0:
      print(0)
    else:
      print(-heapq.heappop(arr))
  else:
    heapq.heappush(arr, -x)