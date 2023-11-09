a, b = map(int, input().split())
array = []
for i in range(a):
    array.append(i+1)
    
for i in range(b):
    i, j = map(int, input().split())
    array[i-1:j] = reversed(array[i-1:j])
    

for i in range(a):
    print(array[i], end=" ")