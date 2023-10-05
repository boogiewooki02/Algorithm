def dfs():
  if len(li) == m:
    print(" ".join(map(str, li)))
    return
  
  for i in range(1, n+1):
    li.append(i)
    dfs()
    li.pop()

n, m = map(int, input().split())
li = list()
dfs()