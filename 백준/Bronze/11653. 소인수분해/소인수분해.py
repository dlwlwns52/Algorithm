n = int(input())

for i in range(2, n+1):
    while(True):
        if n % i == 0:
            print(i)
            n = n // i
        else:
            break