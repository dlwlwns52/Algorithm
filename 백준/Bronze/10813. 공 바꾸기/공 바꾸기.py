N, M = map(int, input().split())
baguni = []

for k in range(N):
    baguni.append(k+1)

for k in range(M):
    i, j = map(int, input().split())
    baguni[i-1], baguni[j-1]  = baguni[j-1], baguni[i-1]

for i in range(len(baguni)):
    print(baguni[i], end = " ")
