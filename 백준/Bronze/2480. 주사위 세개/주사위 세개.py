a, b, c = map(int, input().split())
if(a == b == c):
    print(10000+a*1000)
    
if((a==b and a!=c) or (a==c and a!=b)):
    print(1000+ a*100)
if(b==c and b!=a):
    print(1000+ b*100)    

if(a!=b and a!=c and b !=c):
    if(a>b and a>c):
        print(a*100)
    elif(b>a and b>c):
        print(b*100)
    elif(c>a and c>b):
        print(c*100)