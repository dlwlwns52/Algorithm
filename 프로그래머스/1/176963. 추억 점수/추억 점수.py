def solution(name, yearning, photo):
    answer = []
    dic = {}
    total_sum = 0
    
    
    for i in range(len(name)):
        dic[name[i]] = yearning[i]
    
    for i in photo:
        for k in i:
            if k in dic:
                total_sum += dic[k]
                
        answer.append(total_sum)
        total_sum = 0
                
    return answer

# 1. 딕셔너리로 넣기
# 2.for문 -> if in 이라면 더하기 총합(total_sum)
# 3. not in이라면 continue
# 4. 끝나면 total_sumd에 append
# return