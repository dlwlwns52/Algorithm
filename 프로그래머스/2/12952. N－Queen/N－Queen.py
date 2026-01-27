# 행별로 하나씩 -> for 문 n개
# 열, 대각선 같으면 안됨
# 대각선은 현재좌표 열-열 행-행이 같으면 대각선인것
# visited True n개
# 재귀 -> 좌표 값도 저장 -> 배열 선언
# 


def solution(n):
    
    answer = 0
    
    visited = [False] * n
    col = [0] * n

    def back(n, row):
        nonlocal answer
        if row == n:
            answer += 1
        for i in range(n):
            if not visited[i] and not cross(i, row, col):
                col[row] = i
                visited[i] = True
                back(n, row+1)
                visited[i] = False
  
    back(n, 0)
            
    return answer


def cross(i, row, col):
    for k in range(row):
        if abs(row - k) == abs(i- col[k]):
            return True
    return False





# # 행별로 하나씩 -> for 문 n개
# # 열, 대각선 같으면 안됨
# # 대각선은 현재좌표 열-열 행-행이 같으면 대각선인것
# # visited True n개
# # 재귀 -> 좌표 값도 저장 -> 배열 선언
# # 


# def solution(n):
#     answer = 0
#     visited = [False] * n
#     navs = []
    
    
#     def back(n, row):
#         for i in range(n):
#             if not visited[i]:
#                 nav = (row, i)
#                 for i in navs:
#                     if cross(i, nva):
#                         visited[i] = True
#                         back(n, row+1)
#                         visited[i]= False
                
#     back(n, 0)
            
#     return answer


# def cross(a, b):
#     if a[0] == b[0] and a[1] == b[1]:
#         return True
#     return False



