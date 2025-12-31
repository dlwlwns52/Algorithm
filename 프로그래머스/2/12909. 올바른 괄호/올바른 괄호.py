# s 만큼 for문
# 스택 하나 생성 stack =[]
# ")" 일 경우 스택에 넣는다.
# "(" 일 경우 스택에 값이 존재하면 하나 뺀다. 스택에 값이 없으면 false반환
#  끝까지 갔을때 스택이 빈값이라면 true 반환

# 궁금증
#  isFull, isEmpty 파이썬에서 내장함수로 제공하나?
#  .pop()에서 ()에 숫자를 안 넣도 되나

def solution(s):
    answer = True
    stack = []
    
    # s = reversed(s)
    
    for i in s:
        if i == "(":
            stack.append(i)
        else:
            if len(stack) == 0:
                return False
            else:
                stack.pop()
    if stack:
        return False

    return True