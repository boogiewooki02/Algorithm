def solve():
  n, m = map(int, input().split())
  li = list(map(int, input().split()))

  short, long = 0, max(li) + 1
  mid = -1

  while True:
    mid = (short + long) // 2

    if short == mid:
      return mid
    
    if sum(max(length-mid, 0) for length in li) >= m:
      short = mid
    else:
      long = mid

print(solve())