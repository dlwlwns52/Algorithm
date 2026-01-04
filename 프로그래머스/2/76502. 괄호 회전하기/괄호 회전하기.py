#  올바른 괄호 기준 2
#  길이만큼 회전
#  시간복잡도 n^2까지 가능

# 회전하는 로직
# s길이만큼 for문
# 문자열 s[1:] + s[0] 

# 체크하는 로직
# 스택 한개 만들기 ("[", "{" , "("  각각)
# "[", "{" , "("  일경우 append
#  반대일경우 있으면 pop 없으면 return

# 결과반환할 count 생성
# 마지막 로직까지 온경우 count + 1

#  시간복잡도 n2
def solution(s):
    answer = -1
    count = 0
    stack = []
    imsi = s

    for i in range(len(s)):
        for k in range(len(s)):
            # 체크하는 로직
            if imsi[k] == "[" or imsi[k] == "{" or imsi[k] == "(":
                stack.append(imsi[k])
            elif imsi[k] == "]" or imsi[k] == "}" or imsi[k] == ")":
                if not stack:
                    break
                if imsi[k] == "]":
                    if stack[-1] != "[":
                        break
                    else:
                        stack.pop()
                        
                if imsi[k] == "}":
                    if stack[-1] != "{":
                        break
                    else:
                        stack.pop()
                        
                        
                if imsi[k] == ")":
                    if stack[-1] != "(":
                        break
                    else:
                        stack.pop()
              

            #카운트 하는 로직
        else:
            if not stack:
                count+=1
                
        #회전하는 로직
        imsi = imsi[1:] + imsi[0]
        
    print(count)

    return count

# 스위치 케이스 어떻게?
# 특정문자만 pop가능?
#     일단
    
#  1. 문자열 for문에서 len안둘러서  에러
    # TypeError: 'str' object cannot be interpreted as an integer
#  2. for문에 return해서 null

# 제출후 채점하기에서 한 case만 틀림 -> 뭐지
#  ([)] 중첩문제가 안된다

