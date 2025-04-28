# 방 번호

num = input()
d = {str(x):0 for x in range(10)}

for n in num:
    d[n] += 1

v1 = (d['6']+d['9'])//2 + (d['6']+d['9'])%2
d['6'] = d['9'] = 0
v2 = max(d.values())

print(max(v1, v2))
