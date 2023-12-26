n = int(input())
array = []
if n == 1:
    x, y = map(int, input().split())
    print(0)
    
else:
    for i in range(n):
        x, y = map(int, input().split())
        array.append([x,y])
        
    array_x = []
    array_y = []
    x_min = 0
    x_max = 0
    y_min = 0
    y_max = 0

    for i in range(len(array)):
        array_x.append(array[i][0])
        array_y.append(array[i][1])
        
    x_min = min(array_x)
    x_max = max(array_x)
    y_min = min(array_y)
    y_max = max(array_y)

    x_total = x_max - x_min
    y_total = y_max - y_min
    print(x_total * y_total)