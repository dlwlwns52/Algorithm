# 이중 for문 불가 n^2
# 1, 원소 하나를 뽑고 초세기  만약 작은게 있다면 바로 다음거 하고 count넣기 근데 최대 n^2
def solution(prices):
    answer = []

    # 이중 for 
    for i in range(len(prices)-1): # 0 - 4
        count = 0
        for k in range(i+1, len(prices)): #1 - 5
            if prices[i] <= prices[k]:
                count +=1
            else:
                count +=1
                answer.append(count)
                break
        else:
            answer.append(count)
        
                
    answer.append(0)
    
    return answer