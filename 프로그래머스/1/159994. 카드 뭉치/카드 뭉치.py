# 1. goal 길이만큼 for문
# 2. 해당 순서(i) 에서 cards1, cards2 첫번째 원소중 있는지 확인
# 3. 각각 없으면 패스
# 4. 둘다없으면 No 리턴
# 5. 끝나면 Yes 리턴
def solution(cards1, cards2, goal):
    answer = ''
    for i in range(len(goal)):
        if cards1:
            if goal[i] == cards1[0]:
                cards1.pop(0)
                continue
                
        if cards2:
            if goal[i] == cards2[0]:       
                cards2.pop(0)
                continue
        answer = "No"
        return answer
    
    answer = "Yes"
    return answer