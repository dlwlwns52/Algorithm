import sys
num = int(sys.stdin.readline())
queue = []

for i in range(num):
    value = list(map(str, sys.stdin.readline().split()))
    
    if value[0] == "push":
        value[1] = int(value[1])
        queue.append(value[1])
    
    elif value[0] == "pop":
        if not queue:
            print(-1)
            continue
        else: 
            print(queue[0])
            queue.pop(0)

        
    elif value[0] == "size":
        print(len(queue))
        
    elif value[0] == "empty":
         if not queue:
            print(1)
         else:
            print(0)
        
    elif value[0] == "front":
        if not queue:
            print(-1)
        else:
            print(queue[0])
        
    elif value[0] == "back":
        if not queue:
            print(-1)
        else:
            print(queue[len(queue)-1])