def solution(array, commands):
    result = []
    for command in commands:
        i, j, k = command[0], command[1], command[2]
        new_array = sorted(array[i-1:j])
        result.append(new_array[k-1])
    return result