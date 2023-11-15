ori_chess = [1,1,2,2,2,8]
in_chess = list(map(int, input().split()))
fix_chess = []

for i in range(len(in_chess)):
    if ori_chess[i] == in_chess[i]:
        fix_chess.append(0)
    
    else:
        fix_chess.append(ori_chess[i] - in_chess[i])
        
    print(fix_chess[i], end= " ")
        
        