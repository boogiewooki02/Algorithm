def solution(clothes):
    d = {}
    for c in clothes:
        if c[1] not in d:
            d[c[1]] = 1
        else:
            d[c[1]] += 1
    # print(d)
    answer = 1
    for v in d.values():
        answer *= (v+1)
        
    return answer-1