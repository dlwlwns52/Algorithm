# 내위치 1,1 / 상대방 위치n,m
# 상대방 위치 구하기 -> 행, 렬
# 못찾으면 -1 반환
# 좌표 설정 상하좌우
# 재귀, 큐 써서
# 1,1 q에 넣고 방문true
# for 문 한도에 벗어나면 스킵, 상하좌우 길이만큼 만약 다음곳이 1이면 큐에넣기 count +1 -> 전역변수

from collections import deque
def solution(maps):
    answer = 0
    d = [(1,0), (-1,0),(0,-1),(0,1)] #상하좌우
    n, m = len(maps), len(maps[0]) # 상대방 위치 구하기 -> 행, 렬
    dq = deque()
    start = (0,0,1)
    distance = 0
    dq.append(start)
    imi = [[False] * len(maps[0]) for _ in range(len(maps))]
    
    while dq:
        dy, dx, distance = dq.popleft()
        
        if dy == n-1 and dx == m-1:
            return distance
        
        for row, col in d:
            if 0 <= dy+row < n and 0 <= dx+col < m:
                if imi[dy+row][dx+col] == False and maps[dy+row][dx+col] != 0:
                    imi[dy+row][dx+col] = True
                    dq.append((dy+row,dx+col, distance + 1 ))
                    
    return -1


# UnboundLocalError: local variable 'count' referenced before assignment
# RecursionError: maximum recursion depth exceeded while calling a Python object



# visited된 곳이면 false?
# 