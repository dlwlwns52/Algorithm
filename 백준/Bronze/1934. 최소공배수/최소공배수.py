import sys
n = int(input())
arr = []
answer= []
imsi = 0


for i in range(n):
    arr = list(map(int, input().split()))
    arr_s = sorted(arr)
    
    #최대공약수 찾기
    while arr_s[0] != 0:
        arr_s[1], arr_s[0] = arr_s[0], arr_s[1]%arr_s[0]
    imsi = arr_s[1]    
    
    answer.append((arr[0]*arr[1])//imsi)
    
            
for i in range(n):
    print(answer[i])