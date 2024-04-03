#1. stack 를 사용한다.
#2. '(' 일 경우 스텍에 넣는다
#3. ')'일 경우 바로 전거가 '(' 인 경우 pop한다. 아닌 경우 넣는다.
#4. not stack 인 경우 yes 아닌경우 no

n = int(input())

for i in range(n):
    stack = []
    ps = input()
    for i in ps:
        if i == "(":
            stack.append(i)
        elif i == ")":
          if stack:
            if stack[-1] == "(":
                stack.pop()
            elif stack[-1] == ")":
                stack.append(i)
          elif not stack:
            stack.append(i)
        
    if stack:
        print("NO")
    else:
        print("YES")
            