alpabet = "abcdefghijklmnopqrstuvwxyz"
a = input()

for i in alpabet:
    if i in a:
        print(a.index(i), end=" ")
    else:
        print(-1, end=" ")