from sys import stdin
input = stdin.readline

n = int(input())

userList = []
for _ in range(n):
  age, name = input().strip().split()
  userList.append(
    (int(age), name)
  )

userList.sort(key=lambda x: x[0])
for user in userList:
  print(*user)
