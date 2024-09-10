# 2606번 실버3

# 정점 수
v = int(input())
# 간선 수
e = int(input())
graph = [[] for _ in range(v+1)]
# 그래프 생성
for _ in range(e):
  a, b = map(int, input().split())
  # 무방향 그래프이므로 양쪽에서 추가
  graph[a].append(b)
  graph[b].append(a)

count = 0
visited = [False for _ in range(v+1)]

# 재귀적 구현 with 깊이우선탐색
def dfs(x):
  global count
  visited[x] = True
  count += 1
  for node in graph[x]:
    if visited[node]:
      continue
    dfs(node)

dfs(1)
print(count-1)