# while True
# for문 3번씩 반복
# 마지막 단어 저장, 마지막 단어 while문 들어가기전에 초기화
# 1. 단어가 틀릴때, 이미 했던걸 했을때 i값하고 count반환 count는 while문 실행될때마다 처음 값 1
# 마지막까지 안나오면 [0,0]반환
# 

# set에 존재하면 그때도 반환

from collections import deque
def solution(n, words):
    answer = []

    count = 0
    lastWord = words[0][0]
    wordSet = set()
    dq = deque()
    for i in words:
        dq.append(i)
    
    while dq:
        count +=1 
        for i in range(0,n):
            word = dq.popleft()
            if word[0] != lastWord:
                answer.append(i+1)
                answer.append(count)
                return answer
            if word in wordSet:
                answer.append(i+1)
                answer.append(count)
                return answer
            
            lastWord = word[-1]
            wordSet.add(word)
            
    answer = [0,0]
    return answer


# answer 이 [1,2]일때 answer.append([1, 2])하면 [[1,2]] 이렇게 되는데 [1,2]로 만드려면 따로따로 answer.append(1), answer.append(2) 이렇게 하는 수밖에 없는지