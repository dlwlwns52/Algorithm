a = int(input())

li = []
for i in range(a):
    
    b = list(input().split())
    b_int = int(b[0])
    b_str = b[1]
    
    for k in range(len(b_str)):
        li.append(b_str[k]*b_int)
        print(li[k], end="")
    print()
    li=[]
    
