n,m = list(map(int, input().split()))
cd = list(map(int, input().split()))

max_sum = 0
for i in range(n):
  for k in range(i+1,n):
    for j in range(k+1, n):
      if(m >= (cd[i] + cd[k]+ cd[j]) and max_sum < cd[i] + cd[k]+ cd[j]):
        max_sum = cd[i] + cd[k]+ cd[j]

print(max_sum)

