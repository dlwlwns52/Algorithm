# 문제이해
# 7 4 9
#  우선 베포일자를 구하자
# 베포일자 선언 deque()  collections import deque
# for문만큼 progress 반복
# while문 사용 해당 speeds값으로 더해서 100이 달성되는값 count
# 100 달성시 count값 베포일자(list)에 넣기
# 베포일자 구했으면 큐 사용
# while 사용(deque 존재시까지) 해서 큐 첫번째값 저장 후 그거솝ㅂ다 작으면 다 pop 크면 answer에 넣고 count초기화

from collections import deque   
def solution(progresses, speeds):
    answer = []
    dq = deque()
    count_list = []
    
    for i in range(len(progresses)):
        count = 0
        while progresses[i] < 100:
            progresses[i] = progresses[i] + speeds[i]
            count += 1
        dq.append(count)
    
# 베포일자: [7,3,9] , [5,10,1,1,20,1] 여기서 큰거 기준으로 카운트해서 빼는게 될거같은데 잘 안되네
#  imsi = [], answer = []
# 1. while 반복
# 2. dq 가 없으면 break - imsi가 존재하면 해당길이 append후 break
# 3. imsi 배열이 없으면 dq.popleft 후 continue
# 4. imsi 배열이 있으면 imsi[0] 하고 dq[0] 하고 비교
# 5. imsi[0]이 크면 popleft후 imsi에 append
# 6. imsi[0]이 작으면 answer.append(len(imsi)) 후 imsi초기화 
    imsi = []
    while True:
        if not dq:
            if imsi:
                answer.append(len(imsi))
            break
        
        if not imsi:
            imsi.append(dq.popleft())
            continue
        else:
            if imsi[0] >= dq[0]:
                imsi.append(dq.popleft())
            else:
                answer.append(len(imsi))
                imsi = []

    print(answer)
                
        
    return answer