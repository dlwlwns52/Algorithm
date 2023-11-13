a = list(input().split())
answer = 0
revers= 0

answer = a[0]
answer = int(answer[::-1])

revers = a[1]
revers = int(revers[::-1])

if answer > revers:
    print(answer)
else:
    print(revers)

