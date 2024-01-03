n = int(input())
array = []
total = 0
sum = 0

for i in range(n):
    str_num = str(n-i)

    for i in range(len(str_num)): # 3 -> 0 1 2
        sum += int(str_num[i])

    str_num = int(str_num)
    total = str_num + sum
    if total == n:
        array.append(str_num)
    
    sum = 0
    

if not array:
    print(0)
else:
    print(array[len(array)-1])