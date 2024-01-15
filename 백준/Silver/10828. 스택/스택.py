import sys
n = int(sys.stdin.readline())
array = []

for i in range(n):
    stack = sys.stdin.readline().split()
    if stack[0] == "push":
        array.append(int(stack[1]))
    
    if stack[0] == "pop":
        if not array:
            print(-1)
        else:
            print(array[len(array)-1])
            array.pop()
         
    if stack[0] == "size":
        print(len(array))
        
    if stack[0] == "empty":   
        if not array:
            print(1)
        else:
            print(0)
            
    if stack[0] == "top":
        if not array:
            print(-1)
        else:
            print(array[len(array)-1])
     