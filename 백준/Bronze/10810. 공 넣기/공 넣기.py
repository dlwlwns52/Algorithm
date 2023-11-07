N, M = map(int, input().split())
array = []

array = [0]* N

for q in range(M):
    i, j, k = map(int, input().split())
    for w in range(i-1,j):
        array[w] = k
    
for q in range(N):
    print(array[q], end = " ")



