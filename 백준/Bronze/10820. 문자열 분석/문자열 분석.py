a = 0
b = 0
c = 0
d = 0
answer = []
while True:
    try:
        n = input()
        for i in n:
            if i.islower():
                a +=1
            elif i.isupper():
                b +=1
            elif i.isdigit():
                c +=1
            elif i.isspace():
                d +=1
                
        print(a,b,c,d)
        a = 0
        b = 0
        c = 0
        d = 0
    except EOFError:
        break
         
            