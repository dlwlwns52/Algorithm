st = input()
stack = []
count = 0

for i in range(len(st)):
    if st[i] == "(":
        stack.append("(")
    elif st[i] == ")":
        stack.pop()
        if st[i - 1] == '(':  # 레이저인 경우
            count += len(stack)
        else:  # 쇠막대기의 끝인 경우
            count += 1
print(count)