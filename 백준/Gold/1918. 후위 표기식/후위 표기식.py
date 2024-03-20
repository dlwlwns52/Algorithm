st = input()
stack = []  # 연산자를 임시 저장할 스택
result = []  # 후위 표기식을 저장할 리스트
priority = {"*": 2, "/": 2, "+": 1, "-": 1, "(": 0}  # 연산자 우선순위 설정

for char in st:
    if char.isupper():  # 피연산자인 경우
        result.append(char)
    elif char == "(":  # 여는 괄호인 경우
        stack.append(char)
    elif char == ")":  # 닫는 괄호인 경우
        while stack and stack[-1] != "(":
            result.append(stack.pop())
        stack.pop()  # 여는 괄호 제거
    else:  # 연산자인 경우
        while stack and priority[char] <= priority[stack[-1]]:
            result.append(stack.pop())
        stack.append(char)

# 스택에 남아있는 연산자를 모두 결과에 추가
while stack:
    result.append(stack.pop())

print("".join(result))  # 리스트를 문자열로 변환하여 출력
