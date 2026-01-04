# for문 길이만큼
# stack생성 하나씩 넣는다.
# 만약 스택 마지막하고 현재 넣으려는 것과 같다면 stack pop
# 스택에 아무것도 없으면 현재거 append
# 다르다면 append
# 스택이 남아있으면 1반환 아니라면 0반환

def solution(s):
    answer = -1
    stack = []
    
    for i in s:
        # 스택에 아무것도 없으면 현재거 append
#         if not stack:
#             stack.append(i)
#             continue
# #           같다면 빼기
        if stack and stack[-1] == i:
            stack.pop()
        else:
            stack.append(i)
    if stack:
        answer = 0
    else:
        answer = 1

    return answer