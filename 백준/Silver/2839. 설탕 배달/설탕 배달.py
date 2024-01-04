n = int(input())
su = 0
array = []

if n % 5 == 0:

    su = n // 5
    print(su)

else:
    fi = n // 5 # 2
    th = n // 3 # 3
    for i in range(th+1): # 3
        for k in range(fi+1): # 2
            su = n - (5 * k + 3 * i)
            if su == 0:

                array.append(i + k) 

    if not array:
        print(-1)
    else:
        print((min(array))) 
            
            