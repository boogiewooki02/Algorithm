n, m = map(int, input().split())
cardList = list(map(int, input().split()))

maxValue = -1
for left in range(n-2):
  for mid in range(left+1, n-1):
    for right in range(mid+1, n):
      value = (
        cardList[left] +
        cardList[mid] +
        cardList[right]
      )
      if m >= value > maxValue:
        maxValue = value

print(maxValue)