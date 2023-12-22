while(True):
    arr = []
    n = int(input())
    
    for i in range(n-1): # 약수 배열에 저장
        if n % (i+1) == 0:
            arr.append(i+1)

    sum = 0
    if (n == -1):
        break
    
    for i in range(len(arr)): 
        sum += arr[i]
        
    if (n == sum):
        print(f"{n} =", end = " ")
        for i in range(len(arr)):
            if i < len(arr)-1:
                print(f"{arr[i]} +", end = " ")
            else:
                print(f"{arr[i]}")
                
        
    else:
        print(f"{n} is NOT perfect.")
   
    
    