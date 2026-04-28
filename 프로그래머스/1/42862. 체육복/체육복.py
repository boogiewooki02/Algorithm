def solution(n, lost, reserve):
    # 여벌이 있는데 도난당한 학생들 제외
    s_reserve = set(reserve) - set(lost)
    s_lost = set(lost) - set(reserve)
    
    for r in sorted(s_reserve):
        if r-1 in s_lost:
            s_lost.remove(r-1)
        elif r+1 in s_lost:
            s_lost.remove(r+1)
    
    return n-len(s_lost)