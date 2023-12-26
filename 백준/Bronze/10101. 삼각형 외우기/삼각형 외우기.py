a = []

for i in range(3):
    b = int(input())
    a.append(b)
    
if a[0] + a[1] + a[2] == 180:    
    if a[0] == a[1] and a[0] == a[2] and a[1] == a[2]:
        print("Equilateral")
    elif a[0] != a[1] and a[0] != a[2] and a[1] != a[2]:
        print("Scalene")
    else:
        print("Isosceles")
else:
    print("Error")
