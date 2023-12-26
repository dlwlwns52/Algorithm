
while(True):
    array = list(map(int, input().split()))
    if array[0] == 0 and array[1] == 0 and array[2] == 0:
        break
        
    array = sorted(array)
    if array[2] >= array[0] + array[1]:
        print("Invalid")
    else:
        if array[0] == array[1] == array[2]:
            print("Equilateral")
        elif array[0] != array[1] != array[2]:
            print("Scalene")
        else:
            print("Isosceles")
    array = []