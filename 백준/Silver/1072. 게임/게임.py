def solve():
  nGame, nWin = map(int, input().split())
  nowRate = int(100 * nWin/nGame)

  #binary search
  left, right = 1, 10**9+1
  mid = right//2

  while left < right:
    newRate = int(100*(nWin+mid) / (nGame+mid))

    assert not newRate < nowRate
    if newRate != nowRate:
      right = mid
    else:
      left = mid + 1

    mid = (left + right) // 2

  if mid in range(1, 10**9+1):
    print(mid)
  else:
    print(-1)

solve()