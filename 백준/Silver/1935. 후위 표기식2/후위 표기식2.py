n = int(input())
j = input()
arr = []

for i in j:
     arr.append(i)

only = list(set(arr))
only.sort()
dic_list = []
dic = {}
for j in only:
  if j != "+" and j != "-" and j != "*" and j != "/":
    dic_list.append(j)

for k in range(n):
     dic[dic_list[k]] = int(input())

stack = []
imsi = []
ca = 0
    
    
for i in arr:
    if i == "+":
        imsi.append(stack.pop())
        imsi.append(stack.pop())
        ca = imsi[1] + imsi[0]
        stack.append(ca)
        imsi = []
        ca = 0
        
    elif i == "-":
        imsi.append(stack.pop())
        imsi.append(stack.pop())
        ca = imsi[1] - imsi[0]
        stack.append(ca)
        imsi = []
        ca = 0

    elif i == "*":
        imsi.append(stack.pop())
        imsi.append(stack.pop())
        ca = imsi[1] * imsi[0]
        stack.append(ca)
        imsi = []
        ca = 0

    elif i == "/":
        imsi.append(stack.pop())
        imsi.append(stack.pop())
        ca = imsi[1] / imsi[0]
        stack.append(ca)
        imsi = []
        ca = 0
        
    else:
        stack.append(dic[i])

print("%.2f"%stack[0])
