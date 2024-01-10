n = int(input())
arr = []
for i in range(n):
    arr.append(list(map(str, input().split())))

for i in range(n):
    arr[i][0] = int(arr[i][0])
arr = sorted(arr, key = lambda x: int(x[0]))

for i in range(n):
    print(arr[i][0], end = " ")
    print(arr[i][1])

