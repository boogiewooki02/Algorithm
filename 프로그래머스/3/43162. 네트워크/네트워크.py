def solution(n, computers):
    answer = 0
    visited = [False] * n
    
    def dfs(i):
        visited[i] = True # 해당 노드 방문 체크
        
        for j in range(n):
            if (computers[i][j] == 1 and not visited[j]):
                dfs(j) # 연결되있으면 타고 더 들어감
    
    for i in range(n):
        if not visited[i]:
            dfs(i)
            answer += 1 # 하나의 네트워크 생성
    
    return answer