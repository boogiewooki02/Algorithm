def solution(participant, completion):
    # for name in completion:
    #     participant.remove(name)
    # return participant[0]
    participant.sort()
    completion.sort()
    for i, j in zip(participant, completion):
        if i != j:
            return i
    return participant[-1]