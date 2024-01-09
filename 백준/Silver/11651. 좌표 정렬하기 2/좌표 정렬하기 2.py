n = int(input())
li = []
for i in range(n):
    li.append(list(map(int, input().split())))
    li[i][0], li[i][1] = li[i][1], li[i][0]
li.sort()
  
for i in range(n):
    li[i][0], li[i][1] = li[i][1], li[i][0]
    print(li[i][0], end = " ")
    print(li[i][1])
