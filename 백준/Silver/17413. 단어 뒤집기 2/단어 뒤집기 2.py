import sys

s = input()
flag = False
arr = []
stack = []
count = 0

for i in s:
    count+=1
    if i == "<":
        flag = True
        if stack:
            for _ in range(len(stack)):
                print(stack.pop(), end = "")
        
    if flag == True:
        arr.append(i)
        if i == ">":
            flag = False
            for j in arr:
                # print(arr)
                print(j, end="")
            arr=[]
            continue
        
    if flag == False:
        stack.append(i)  
        # print(stack)    
        if i == " ":
            stack.pop()
            for _ in range(len(stack)):
                print(stack.pop(), end = "")
            print(" ", end="")

        if count == len(s):
            for _ in range(len(stack)):
                print(stack.pop(), end = "")
            print(" ")
     