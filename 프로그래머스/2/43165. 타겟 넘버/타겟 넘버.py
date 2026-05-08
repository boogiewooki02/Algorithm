def solution(numbers, target):
    # 재귀함수로 접근할 것 같은데.
    answer = 0
    
    def dfs(idx, current_sum):
        nonlocal answer  # 호출한 함수의 변수 사용
        
        # 종료조건
        if idx == len(numbers):
            if current_sum == target:
                answer += 1
            return
        
        dfs(idx + 1, current_sum + numbers[idx])
        dfs(idx + 1, current_sum - numbers[idx])
    
    dfs(0, 0)
    return answer