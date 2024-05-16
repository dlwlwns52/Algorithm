n = int(input())
k = 1
while(True):

  if k**2 + k > n*2:
    k -=1
    break
    
  elif k**2 + k == n*2:
    break

  else:
    k+=1

print(k)