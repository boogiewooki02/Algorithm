# 7785번 실버5

# n = int(input())
# result = list()
# for _ in range(n):
#   name, log = input().split()
#   if name in result:
#     result.remove(name)
#   else:
#     result.append(name)
# result.sort(reverse=True)
# for name in result:
#   print(name)
# 시간초과

n = int(input())
result = set()
for _ in range(n):
  name, log = input().split()
  if log == "enter":
    result.add(name)
  else:
    result.discard(name)
result = sorted(result, reverse=True)
for name in result:
  print(name)
