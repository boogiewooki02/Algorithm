# 처음 드는 생각 : 이게 어떻게 이분탐색인거지?
# -> 총 걸리는 시간을 최소, 최대로 잡고 이분탐색을 진행하면서
# -> 해당 시간 내에 n명의 검사가 이루어지는지를 확인하며 반복
# -> 최적의 시간을 찾는 순간은 left <= right 조건을 위배하는 순간임.(이분탐색)
def solution(n, times):
    left = 1
    right = max(times) * n # 최대시간으로 초기화
    
    while left <= right:
        mid = (left+right)//2
        people = 0
        
        for time in times:
            people += mid//time
            
            if people >= n:
                break
        
        if people >= n:
            answer = mid
            right = mid - 1
        # 시간이 부족해서 n명 검사를 끝내지 못한 상황
        else:
            left = mid + 1
    
    return answer