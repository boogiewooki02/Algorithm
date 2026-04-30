def solution(citations):
    citations.sort(reverse=True) # 내림차순
    answer = 0
    
    for i, c in enumerate(citations, start=1):
        if c >= i: # 해당 논문 인용 횟수 >= 지금까지 확인한 논문 수
            answer = i
        else:
            break
    return answer
