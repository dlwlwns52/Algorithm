s = input()
alpabet = "abcdefghijklmnopqrstuvwxyz"
arr = []


for i in alpabet:
    if i in s:
        arr.append(s.count(i))
    else:
        arr.append(0)

for i in arr:
    print(i, end = " ")