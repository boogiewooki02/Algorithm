from itertools import permutations

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def solution(numbers):
    s = set()
    nums = [int(n) for n in numbers]
    for i in range(1, len(nums)+1):
        for perm in permutations(nums, i):
            # print(perm)
            num = ''.join(map(str, perm))
            s.add(int(num)) # 문자열 집합
    
    result = 0
    for p in list(s):
        if is_prime(p):
            result += 1
                    
    return result
    