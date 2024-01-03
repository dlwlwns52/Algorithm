N, M = map(int, input().split())
array =[]
sum = 0
total = 0
total_sum = []

array = list(map(int, input().split()))


for i in range(N-2):
    for k in range(i+1, N-1):
        for j in range(k+1, N):
            total = array[i] + array[k] + array[j]
            if total <= M:
                total_sum.append(total)
         
    
total_sum = sorted(total_sum)
print(total_sum[len(total_sum)-1])

