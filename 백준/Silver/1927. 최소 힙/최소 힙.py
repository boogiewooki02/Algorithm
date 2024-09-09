# 1927번 실버2

import heapq
import sys

arr = []
n = int(sys.stdin.readline())
for _ in range(n):
  x =  int(sys.stdin.readline())
  if x == 0:
    if len(arr) == 0:
      print(0)
    else:
      print(heapq.heappop(arr))
  else:
    heapq.heappush(arr, x)