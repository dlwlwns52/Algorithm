def solution(players, callings):
    answer = []
    dict_ps = {k: i for i, k in enumerate(players)}
    index = 0
    

    for ck in callings:
        index = dict_ps[ck]
        players[index], players[index-1] = players[index-1],players[index]
    
        dict_ps[players[index]] = index  # 교체된 선수 등수 업데이트
        dict_ps[players[index-1]] = index - 1  # 앞에 있던 선수도 업데이트

    answer = players
            
     
    return answer


# callings 배열만큼 for 문
# index = 0, index = players[callings[i]]
# 그 인덱스와 바로 앞 인덱스를 바꾼다.
# 종료되면 끝