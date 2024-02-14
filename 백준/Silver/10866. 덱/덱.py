import sys 

num = int(sys.stdin.readline())
deque = []

for i in range(num):
    n = list(map(str, sys.stdin.readline().split()))
    
    if n[0] == 'push_front':
        if not deque:
            deque.append(int(n[1]))
        else:
            deque.insert(0,int(n[1]))
            
    elif n[0] == 'push_back':
        if not deque:
            deque.append(int(n[1]))
        else:
            deque.append(int(n[1]))
    
    elif n[0] == 'pop_front':
        if not deque:
            print(-1)
        else:
            print(deque[0])
            deque.pop(0)
            
    elif n[0] == 'pop_back':
        if not deque:
            print(-1)
        else:
            print(deque[len(deque)-1])
            deque.pop(len(deque)-1)
            
    elif n[0] == 'size':
        print(len(deque))
    
    elif n[0] == 'empty':
        if not deque:
            print(1)
        else:
            print(0)
            
    elif n[0] == 'front':
        if not deque:
            print(-1)
        else:
            print(deque[0])

    elif n[0] == 'back':
        if not deque:
            print(-1)
        else:
            print(deque[len(deque)-1])

            
            
        
        
        
        
           