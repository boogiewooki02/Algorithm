def solution(id_list, report, k):
    name_d = {name:[] for name in id_list}
    num_d = {name:0 for name in id_list}
    result = []
    
    for r in report:
        a, b = r.split()
        if b not in name_d[a]:
            name_d[a].append(b)
            num_d[b] += 1
    
    for name in id_list:
        cnt = 0
        for v in name_d[name]:
            if num_d[v] >= k:
                cnt += 1
        result.append(cnt)
    
    return result
            