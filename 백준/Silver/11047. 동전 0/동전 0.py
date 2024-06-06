def greed(n, arr):
    count = 0
    for i in arr:
        if n < i:
          continue
        else:
            count += n//i
            n = n % i
        if n == 0:
            return count

k, n = map(int, input().split())
arr = []
for i in range(k):
    arr.append(int(input()))
arr.reverse()
print(greed(n,arr))