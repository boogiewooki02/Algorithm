from itertools import permutations

def solution(k, dungeons):
    idx_list = [x for x in range(len(dungeons))]
    perms = list(map(list, permutations(idx_list)))
    # print(perms)
    result = []
    for perm in perms:
        tmp = k
        cnt = 0
        for i in perm:
            if tmp >= dungeons[i][0]:
                tmp -= dungeons[i][1]
                cnt += 1
        result.append(cnt)
    # print(result)
    return max(result)