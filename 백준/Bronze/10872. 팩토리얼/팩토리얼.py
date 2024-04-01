n = int(input())
answer = 1
if n == 0:
    print(1)
elif n == 1:
    print(1)
elif n > 1:
    for i in range(1,n+1):
        answer *= i
    print(answer)   
        