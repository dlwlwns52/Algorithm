def solution(n, computers):
    answer = 0
    visited = [False] * len(computers)
    
        # 역할 1인거 찾아서 다 true
    def dfs(i):
        for k in range(n):
            if computers[i][k] == 1 and visited[k] == False:
                visited[k] = True
                dfs(k)
                

        
    for i in range(n):
        if visited[i] == False:
            answer += 1
            dfs(i)

    return answer

        
   
    


# [[1, 0, 0],
# [0, 1, 1], 
# [1, 1, 0]]

# 1. visited 컴퓨터 개수만큼 False
# 2. 컴퓨터 개수만큼 for문 -> 현재 내 컴퓨터가 어떤 컴퓨터와 네트워크가 돼 있나.?
# 3. 만약 그 자리가 False라면 True로 설정 후 dfs
# 4. dfs로 본인 컴퓨터와 연결 돼 있는 곳(1인곳) 다 True 설정
#  0을 만나면 1을 더한다?

