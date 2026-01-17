# "SOOOL",
# "XXXXO",
# "OOOOO",
# "OXXXX",
# "OOOOE"]

# 1. 시작 지점 좌표값 구하기
# 2. bfs 탐색 준비 -> 큐, 좌표 방향, 간곳 체크,카운터
# 3. L까지 bfs 탐색  다시 L좌표에서 E까지
# 사방이 막혀있으면 -1리턴  

from collections import deque

def solution(maps):
    answer = 0
    h = len(maps)
    w = len(maps[0])
# 1. 시작 지점 좌표값 구하기
    for i in range(len(maps)):
        for j, k in enumerate(maps[i]):
            if k == "S":
                start = (j,i)

    # print(start)
    # print(visited)
    # print(distance)
# 3. L까지 bfs 탐색 
# while문 실행
# 시작 좌표  visited- 0 distance - true설정
# directions방향 값이 존재하는지 확인 - 없거나 X거나 Visited true면 스킵 / 존재하면 visited +1 distance - true
# S발견시 해당 좌표와 카운트값 가져오기
# 사방이 막혀있으면 -1리

    def bfs(start, target):
        visited = [[False]*w for _ in range(h)]
        distance = [[0]*w for _ in range(h)]
        directions = [(0,1), (0,-1), (-1,0), (1,0)] #상 하 좌 우
        dq = deque()
        x, y = start[0], start[1]
        visited[y][x] = True
        dq.append((x,y))

        while dq:
            x,y = dq.popleft()
            if maps[y][x] == target:
                return distance[y][x], (x,y)

            for i in directions:
                nx, ny = x+i[0], y+i[1]
                if 0 <= nx < len(maps[0]) and 0 <= ny < len(maps):
                    if not visited[ny][nx] and maps[ny][nx] !="X":
                        visited[ny][nx] = True
                        distance[ny][nx] = distance[y][x] + 1 
                        dq.append((nx,ny))  
        return -1, None

    
    a, b = bfs(start, "L")
    if a == -1:
        return -1
    print(a)
    # visited = []
    # distance = []
    c, d = bfs(b, "E")
    if c == -1:
        return -1
    print(c)
    answer = a + c
    # print(123)
    print(answer)

    return answer


# visieted처리안함
# 4방향 설정? t (1,0), (0,1)  w : (1,0), (0,1) 
# 시작 지점 찾기 -> 인덱스가 어떻게 되는지 확인
# 해당 위치에서 뚫려잇는 곳 찾기?

# 레버를 당기지 않아도 출구를 지나칠 수 있다는게 뭔소리냐
#     EXIT 가 꼭 마지막에 있지 않다는 뜻인거 같음
# 만약 네방향 다 뚫려있는 경우에는 어떻게함?