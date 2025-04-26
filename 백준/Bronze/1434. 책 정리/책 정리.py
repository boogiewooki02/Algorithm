# 책 정리

n, m = map(int, input().split())
box_list = list(map(int, input().split()))
book_list = list(map(int, input().split()))

result = 0

for book in book_list:
    for i in range(len(box_list)):
        if box_list[i] < book:
            result += box_list[i]
            box_list[i] = 0
        else:
            box_list[i] -= book
            break

result += sum(box_list)

print(result)
