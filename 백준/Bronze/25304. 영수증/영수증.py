T = int(input())
N = int(input())
c = 0
for i in range(N):
    a, b = map(int, input().split())
    c += a * b 
    
if (T == c):
    print("Yes")
else:
    print("No")
    