N = int(input())
k = list(map(int, input().split()))
count= 0
sosu = 0
arr = []
for i in range(len(k)):
    if k[i] > 1:
        for t in range(k[i]-1):
            if(k[i] % (t+1) == 0):
                sosu+=1

            if t+2 == k[i]:
                if(sosu == 1):
                    count+=1
                sosu = 0


print(count)