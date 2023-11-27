r = []
ma = []

for i in range(9):
    mat = list(map(int, input().split()))
    r.append(mat)
    ma.append(max(r[i]))
    
ma_re = max(ma)
print(ma_re)

for i in range(9):
    if ma_re in r[i]:
        print(i+1, end = " ")
        print(r[i].index(ma_re)+1)