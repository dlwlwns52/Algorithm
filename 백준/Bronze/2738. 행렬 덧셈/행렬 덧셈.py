nm = list(map(int, input().split()))


al = []
bl = []
result = []

for k in range(nm[0]): #3
    a = list(map(int, input().split()))
    al.append(a)
for j in range(nm[0]):
    b = list(map(int, input().split()))
    bl.append(b)
    
for p in range(nm[0]):
    for k in range(nm[1]):
        result.append(al[p][k] + bl[p][k])
        print(result[k], end= ' ')
    print()
    result = []