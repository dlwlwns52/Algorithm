x = int(input())
n = 64
count = 1

while True:
  if n > x:
    n = n // 2
    

  else:
    if n == x:
        print(count)
        break

    else:
        count +=1
        x -= n

