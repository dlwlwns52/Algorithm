import sys
n = list(map(int, input().split()))
arr = []
yo = []
re = n[1]
index = 0
for i in range(n[0]):
    arr.append(i+1)

while (True):
    if not arr:
        break
    
    index = (index + re - 1) % len(arr)  # 인덱스 업데이트
    yo.append(arr.pop(index))  # 해당 인덱스의 원소를 제거하고 요세푸스 순열에 추가

    
         
print("<", end="")
for i in range(len(yo)-1): #[1,2,3,4,5]
    print(yo[i], end="")
    print(",", end=" ")
print(yo[len(yo)-1], end="")    
print(">")