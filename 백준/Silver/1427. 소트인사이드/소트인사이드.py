n = str(input())
array = []
for i in n:
    array.append(int(i))
    
array.sort(reverse = True)
# array.reverse()
for i in range(len(array)):
    print(array[i], end="")