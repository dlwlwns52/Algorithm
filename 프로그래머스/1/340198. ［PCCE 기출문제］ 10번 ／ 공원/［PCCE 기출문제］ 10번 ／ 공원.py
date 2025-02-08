def solution(mats, park):
    answer = 0
    for row in range(len(park)):
        for col in range(len(park[0])):
            if park[row][col] == '-1':  # 빈 공간인지 확인
                for i in mats:  # 돗자리 크기 확인
                    # 범위를 벗어나면 건너뛰기
                    if row + i > len(park) or col + i > len(park[0]):
                        continue
                    
                    # 돗자리 영역 검사
                    for k in range(i):
                        for j in range(i):
                            if park[row+k][col+j] != '-1':  # 빈 공간이 아니면 불가능
                                break
                        else:
                            continue
                        break
                    
                    # 배치 가능하면 최대 크기 갱신
                    if k == i-1 and j == i-1:
                        if answer < int(i):
                            answer = int(i)
    
    # 배치 가능한 돗자리가 없으면 -1 반환
    if answer == 0:
        answer = -1
                
    return answer
