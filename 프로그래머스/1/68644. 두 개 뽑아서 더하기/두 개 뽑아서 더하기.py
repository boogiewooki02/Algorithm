def solution(numbers):
    s = set()
    for i in range(len(numbers)-1):
        for j in range(i+1, len(numbers)):
            tmp = numbers[i] + numbers[j]
            s.add(tmp)
    return sorted(list(s))