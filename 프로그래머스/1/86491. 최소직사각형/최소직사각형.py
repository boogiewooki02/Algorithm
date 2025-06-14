def solution(sizes):
    l_list = []
    s_list = []
    for size in sizes:
        l_list.append(max(size))
        s_list.append(min(size))
    return max(l_list)*max(s_list)