def solution(n, wires):
    answer = 100

    for i in range(n-1):
        arr = wires.copy()
        edge = arr.pop(i)
        visited = [False] * len(arr)
        
        
        # [[2,3],[3,4],[4,5],[4,6],[4,7],[7,8],[7,9]]
        # 여기서 1, 3 dfs
        def dfs(node, arr, count, imsi):
            # print(f"count : {count}")
            for i in range(len(arr)):
                if arr[i][0] == node and not visited[i]:
                    count += 1
                    visited[i] = True
                    imsi.append(count)
                    dfs(arr[i][1], arr, count, imsi)
                
                elif arr[i][1]  == node and not visited[i]:
                    count += 1
                    visited[i] = True
                    imsi.append(count)
                    dfs(arr[i][0], arr, count, imsi)
            # print(f"count2 : {count}")
            return imsi
                    
# 
        
        
        imsi1 = []
        count1 = dfs(edge[0], arr, 0, imsi1)
        imsi2 = []
        count2 = dfs(edge[1], arr, 0, imsi2)
       
        if (answer > abs(len(count1) - len(count2))):
            answer = abs(len(count1) - len(count2))
                        
    return answer


# dfs
# wires 길이만큼 for문
# 각 dfs한 길이의 차 중 가장 적은걸 반환

# 카운트할 변수 2개 설정?
# wires 순서는 상관없다
# for문 안에서 wires

