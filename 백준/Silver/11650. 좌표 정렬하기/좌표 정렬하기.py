n = int(input())
li = []
for i in range(n):
    li.append(list(map(int, input().split())))
li.sort()

for i in range(n-1): # n5. 0123 
    if li[i][0] == li[i+1][0]:
        if li[i][1] > li[i+1][1]:
            li[i], li[i+1] = li[i+1], li[i]
   
for i in range(len(li)):
    print(li[i][0], end = " ")
    print(li[i][1])
