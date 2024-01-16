n = int(input())
array_a = []
for i in range(n):
    array = list(input().split())
    for k in range(len(array)):
        array_a.append(array[k][::-1])    
        print(array_a[k], end = " ")
    array_a = []
    