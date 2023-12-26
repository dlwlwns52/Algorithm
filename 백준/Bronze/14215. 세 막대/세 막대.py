a = list(map(int, input().split()))

a = sorted(a)

if a[2] >= a[0] + a[1]:
    a[2] = a[0] + a[1] - 1
    print(a[0]+a[1]+a[2])
else:
    print(a[0]+a[1]+a[2])