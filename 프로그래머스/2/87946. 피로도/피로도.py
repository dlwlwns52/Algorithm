def solution(k, dungeons):
    answer = -1
    visited = [False] * len(dungeons)
    count = 0
    
    def backTracking(k, count):
        nonlocal answer
        for i in range(len(dungeons)): # 3
            if dungeons[i][0] <= k and not visited[i]:
                visited[i] = True
                backTracking(k-dungeons[i][1], count + 1)
                visited[i]= False
        answer = max(answer, count)
        return answer

    backTracking(k, count)
    return answer







# 1. 백트래킹 문제
# 2. 최솟값 설정하고 던전 다 돌았을대 그것보다 크면 갈아치우기 -> count
# 3. 백트래킹 함수 내에서는 for문 써서 탐색
# 4. visited 를 던전 길이만큼해서 true인 곳만 탐방
# 5. 만약 피로도가 낮거나 0이라면 리턴하는데 현재 저장된것과 비교해서 더 큰걸로
# 6. 