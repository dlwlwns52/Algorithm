arr= list(map(int, input().split()))
arr = sorted(arr)
i, k = 1, 1
arr_1 = []
arr_2 = 0
while arr[0] >= i:
    if arr[0] % i == 0 and arr[1] % i == 0:
        arr_1.append(i)
        i += 1
    else:
        i += 1
        continue
    
    
while True:
    if (((arr[1]*k) % arr[0]) == 0):
        arr_2 = arr[1]*k
        break
    else:
        k+= 1
print(arr_1[-1])
print(arr_2)
        
    