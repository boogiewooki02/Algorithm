from itertools import permutations

def solution(k, dungeons):
    idx_list = [x for x in range(len(dungeons))]
    perms = list(map(list, permutations(idx_list)))
    # print(perms)
    result = []
    for perm in perms: # 각 순열 케이스를 순회
        tmp = k # 현재 피로도로 초기화
        cnt = 0 # 각 순열마다의 결과
        for i in perm:
            if tmp >= dungeons[i][0]:
                tmp -= dungeons[i][1]
                cnt += 1
        result.append(cnt)
    # print(result)
    return max(result)