N, X= map(int, input().split())
a = list(map(int, input().split()))
b = []

for i in range(N):
    if (a[i] < X):
        b.append(a[i])

for i in range(len(b)):
    print(b[i], end = " ")
