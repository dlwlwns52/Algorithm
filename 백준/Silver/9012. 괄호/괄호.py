n = int(input())
ans = 0

for i in range(n):
    vps = input()
    if vps.count("(") == vps.count(")") and vps[len(vps)-1] != "(" :
        
        for k in range(len(vps)):
            if ans >= 0:
                if vps[k] == "(":
                    ans +=1
                elif vps[k] == ")":
                    ans -=1
                if k == len(vps)-1 and ans == 0:
                    print("YES")
            else:
                print("NO")
                break
        ans = 0
    else:
        print("NO")
        continue
            
        
    