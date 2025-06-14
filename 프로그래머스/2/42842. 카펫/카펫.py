def solution(brown, yellow):
    li = []
    for i in range(1, yellow+1):
        if yellow%i == 0: li.append(i)
    
    for i in range(len(li)):
        a, b = li[i], li[len(li)-i-1]
        if 2*(a+b)+4 == brown:
            return [b+2, a+2]