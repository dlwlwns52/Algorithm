a = int(input())
b = list(map(int, input().split()))
c = 1000000
d = -1000000

for i in b:
    if (i > c):
        c = c
    elif (i <= c):
        c = i
    
    if (i >= d):
        d = i
    elif(i < d):
        d = d
print(c, d)    
    