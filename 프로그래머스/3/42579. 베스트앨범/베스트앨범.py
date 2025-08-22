def solution(genres, plays):
    d = {}
    for i in range(len(genres)):
        genre = genres[i]
        play = plays[i]
        if genre not in d:
            d[genre] = [(play, i)]
        else:
            d[genre].append((play, i))
    # print(d)
    d_2 = {}
    for k in d:
        d_2[k] = sum(p for p, _ in d[k])
    # print(d_2)
    answer = []
    for genre, _ in sorted(d_2.items(), key=lambda x: x[1], reverse=True):
        songs = sorted(d[genre], key=lambda x: (-x[0], x[1]))
        for play, i in songs[:2]:
            answer.append(i)
    return answer