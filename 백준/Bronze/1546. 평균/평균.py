N = int(input())
fakeA = []

a = list(map(int, input().split()))

max_value = max(a)
sum_value = 0

for i in range(N):
    fakeA.append(a[i]/ max_value * 100)
    sum_value += fakeA[i]

print(sum_value / N)
