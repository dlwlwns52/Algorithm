array = []
count = 0

for i in range(10):
    a= int(input())
    b = 0
    b = a % 42
    array.append(b)

count = len(set(array))
print(count)
      