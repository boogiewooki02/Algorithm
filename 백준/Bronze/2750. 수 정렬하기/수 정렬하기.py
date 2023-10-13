n = int(input())
li = [
  int(input())
  for _ in range(n)
]

li.sort()

for num in li:
  print(num)