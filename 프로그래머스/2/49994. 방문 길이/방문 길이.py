# 5보다 크면 안되고 -5보다 작으면 안된다.
# 0. count_list설정
# 1. [0,0]으로 초기값 설정, 이동할 좌표값 end설정
# 2. dirs 길이만큼 for문 
# 3. 'U', 'D', 'R', 'L' 만큼 +1하는데 end가 +5보다 크거나 -5보다 작으면 현재값 유지 
# 4. 해당 이동한 좌표들 imsi_list = [start, end] 설정
# 4. count_list에 imsi_list 값이 없다면 answer+=1 하고 append
# 5. 있다면 생략 


def solution(dirs):
    answer = 0
    count_list = []
    start = [0,0]
    end = [0,0]
    
    for i in range(len(dirs)):
        imsi_list = []
        if dirs[i] == "U":
            if end[1] == 5:   
                continue
            else:
                end[1] += 1
                path = tuple(sorted([tuple(start), tuple(end)]))

                start[1] += 1
                if path in count_list:
                    continue
                else:
                    answer +=1 
                    count_list.append(path)
                    
        elif dirs[i] == "D":
            if end[1] == -5:
                continue
            else:
                end[1] -= 1
                path = tuple(sorted([tuple(start), tuple(end)]))
    
                start[1] -=1
                if path in count_list:
                    continue
                else:
                    answer +=1 
                    count_list.append(path)
        
        elif dirs[i] == "R":
            if end[0] == 5:
                continue
            else:
                end[0] += 1
                path = tuple(sorted([tuple(start), tuple(end)]))

                start[0] +=1
                if path in count_list:
                    continue
                else:
                    answer +=1 
                    count_list.append(path)
                    
        elif dirs[i] == "L":
            if end[0] == -5:
                continue
            else:
                end[0] -= 1
                path = tuple(sorted([tuple(start), tuple(end)]))
                start[0] -=1
                if path in count_list:
                    continue
                else:
                    answer +=1 
                    count_list.append(path)
    print(count_list)
    return answer



