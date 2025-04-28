# 어린 왕자

import math

t = int(input())

x1 = y1 = x2 = y2 = 0 # 출발점, 도착점
n = 0
cx = cy = r =0

def get_distance(x1, y1, x2, y2):
    d = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return d

for _ in range(t):
    x1, y1, x2, y2 = map(int, input().split())
    n = int(input())
    l = []
    cnt = 0

    for _ in range(n):
        nums = list(map(int, input().split()))
        l.append(nums) # 2차원 배열 생성
    
    for star in l:
        cx, cy, r = star
        start_in = get_distance(x1, y1, cx, cy) < r
        end_in = get_distance(x2, y2, cx, cy) < r

        if start_in != end_in:
            cnt += 1
    
    print(cnt)
