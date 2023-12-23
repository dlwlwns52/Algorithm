M = int(input())
N = int(input())
arr= []
count = 0
total_sum = 0

for i in range(M, N+1):
    if i > 1:
        if i == 2:
            arr.append(i)
        else:
            for k in range(2, i):
                    if i % k == 0:
                        break

                    if i == k+1 and i % k != 0:
                        arr.append(i)



if not arr:
    print(-1)
else:
    for i in range(len(arr)):
        total_sum += arr[i]
    print(total_sum)

    arr.sort()
    print(arr[0])
      