# 이중 for문 안에서 재귀?
# visited 된 부분은 바로 스킵
# 퀸 영역에 있으면 바로 스킵 [0][0]
# 영역인 부분만 따로 모아놓는다? -> 이걸 true로 하면 visited에서 true로 하면 되는거 아닌가?
# count=1 둬서 visited[False]인 곳이면 +1하고 visisted true 갱신
# 



def solution(n):
    answer = 0
    visited = [[False]*n for _ in range(n)]
    print(visited)
    # for i in range(n):
    #     for k in range(n):
    #         if 
    return answer