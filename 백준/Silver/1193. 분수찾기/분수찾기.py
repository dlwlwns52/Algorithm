a = 0 
b = 0
x = int(input())
line = 1

while(x > line):
    x -= line
    line += 1

if(line % 2 == 0):
    a = x
    b = line + 1 - x
    print(f"{a}/{b}")
else:
    b = x
    a = line + 1 - x
    print("{}/{}".format(a, b))