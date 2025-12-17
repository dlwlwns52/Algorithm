# 1. count 배열 생성 (각 숫자 몇개인지) - N+2
# 2. failure배열 생성

# 1. stages에서 각 스테이지별 인원을 구한다.
# 2. 해당 스테이지별 실패율을 구한다.
# 3. key - 스테이지 단계, value - 실패율로 딕셔너리를 만든다.
# 4. 내림차순으로 정렬한다. 정렬돼있으면

# (벨류순으로 키정렬할때(내림차순) 벨류가 같으면 키는 오름차순으로 정렬되나?
# 0
def solution(N, stages):
    answer = []
    count = [0] * (N+2)
    failure = {}
    stages_len = len(stages)
    imsi = []
    for i in stages:
        count[i] += 1

    
    for k in range(1, N+1):
        if count[k] != 0:
            failure[k] = count[k] / stages_len
            stages_len -= count[k]
            
        else:
             failure[k]  = 0
        
    answer = sorted(failure, key = lambda x : failure[x], reverse = True)
    
                   
       
    return answer