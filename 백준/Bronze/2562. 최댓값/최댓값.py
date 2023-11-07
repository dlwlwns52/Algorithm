
b = []

for i in range(9):
    a = int(input())
    b.append(a)

max = max(b)
print(max)

for i in range(len(b)):
  if b[i] == max:
    print(i+1)