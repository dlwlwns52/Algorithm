a, b = map(int, input().split())
c, d = map(int, input().split())
e, f = map(int, input().split())
g, h = 0, 0

if (a==c):
    g = e
if (a == e):
    g = c
if (c== e):
    g = a
    
if(b ==d):
    h = f
if(b ==f):
    h = d
if (d == f):
    h = b
    
print(g, end = " ")
print(h)
    