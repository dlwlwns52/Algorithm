from itertools import combinations

n, m = map(int, input().split())
array = []
for i in range(1, n+1):
  array.append(i)

com = combinations(array, m)
arr = []
for i in com:
  for k in i:
    arr.append(k)

ans = []

for i in arr:
  ans.append(i)
  if len(ans) == m:
    print(' '.join(map(str, ans)))
    ans = []
