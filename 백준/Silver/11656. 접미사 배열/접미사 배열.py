n = input()
arr = []

for i in range(len(n)):
    arr.append(n[i:len(n)])
arr = sorted(arr)
for i in range(len(arr)):
    print(arr[i])