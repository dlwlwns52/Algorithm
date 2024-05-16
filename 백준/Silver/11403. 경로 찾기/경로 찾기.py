n = int(input())
array = []
for i in range(n):
  arr = list(map(int, input().split()))
  array.append(arr)
  arr = []

for k in range(n):
  for i in range(n):
    for j in range(n):
      if array[i][k] == 1 and array[k][j] == 1:
        array[i][j] = 1

for i in range(n):
  for k in range(n):
    print(array[i][k], end = " ")
  print()

