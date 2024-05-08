from itertools import combinations

num = []
for i in range(9):
    num.append(int(input()))

com = combinations(num, 7)

arr = []

for i in com:
    arr.append(list(i))


for i in range(len(arr)):
    if sum(arr[i]) == 100:
      for k in range(7):
        print(arr[i][k])
      break