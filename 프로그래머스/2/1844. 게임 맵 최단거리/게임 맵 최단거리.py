# bfs문제다
# 좌표, visited, 시작-끝점, 카운터, 큐
# 시작점: (0,0), (len(n)-1, len(m)-1)
# visited = [False for _ in maps] -> 이거 방법이 있었던거 같은데
# count = [] -> 이거 변수명 뭐였지 좌표도 뭐였지
# from collections import deque
# dq = deque()
# 0,0에서 시작, 
# 해당 장소 방문 및 count +1 ,visited True,  큐에 넣기
# while dq
# for 좌표
# maps 에 좌표 더한값이 있는데(현재에서 +1값) 그게 방문하지 않아싿면
# 해당장소 큐에넣고 visited true count +1

from collections import deque
def solution(maps):
    answer = -1
    
    visited = [[False] *len(maps[0]) for _ in maps]
    count = [[0] * len(maps[0]) for _ in maps]
        
    dq = deque()
    nav = [(1,0), (-1,0), (0,1), (0,-1)]
    start = (0,0)
    end = (len(maps)-1, len(maps[0])-1) #이거 주의
    dq.append(start)
    count[0][0] = 1
    
    while dq:
        dot = dq.popleft() #변수명
        if dot[0] == len(maps)-1 and dot[1] == len(maps[0])-1:
            answer = count[dot[0]][dot[1]]
            
        for i in nav:          
            x = dot[0] + i[0]
            y = dot[1] + i[1]
            
            if 0 <= x < len(maps) and 0 <= y < len(maps[0]):
                if not visited[x][y] and maps[x][y] == 1:
                    dq.append((x, y))
                    visited[x][y] = True 
                    count[x][y] = count[dot[0]][dot[1]] + 1
    return answer







# [
# [1,0,1,1,1],
# [1,0,1,0,1],
# [1,0,1,1,1],
# [1,1,1,0,1],
# [0,0,0,0,1]
# ]

# 1. 리컴
#     visited = [[False] *len(maps[0]) for _ in maps]
    # count = [[0] * len(maps[0]) for _ in maps]
#     보통 좌표에서 x를 행으로 하는지..?