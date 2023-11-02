A, B = map(int, input().split())
C = int(input())
c_h = C // 60
c_m = C % 60

newa = A + c_h
newb = B + c_m

if (newb >= 60):
    newa +=1
    newb -= 60
    
if (newa >= 24):
    newa -= 24

print(newa, newb)
        
