# 32978

n = int(input())
ingredients = input().split()
used = input().split()

x = set(ingredients) - set(used)

print(x.pop())