# 해시쓰자
#  딕셔너리에 키 - 해시, 값 저장 
#  저장하면서 총합 더함
#  다 더하면 complection for문으로 해시값 구해서 총합뺌
#  나머지 값 벨류값이 정답
def solution(participant, completion):
    answer = ''
    total = 0
    dic = {}
    for i in participant:
        dic[hash(i)] = i
        total += hash(i)
    print(f"total : {total}")
    
    
    for k in completion:
        total -= hash(k)
    
    answer = dic[total]
        
    
    return answer