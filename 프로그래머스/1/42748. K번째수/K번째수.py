# 1. 문자열 슬라이스
# 2. for문에서 커맨드 [0], [1] 까지 따로 뽑아서도 될듯


# arrar_str 생성
# 커맨드만큼 for문
#  arrar_str[i[0]-1:i[1]]
# 이거 다시 list 후 list[i[2]-1]처리

def solution(array, commands):
    answer = []
    
    for i in commands:
        arr = []
        arr = array[i[0]-1: i[1]]
     
        arr.sort()
        print(arr)
        answer.append(arr[i[2]-1])

    return answer

# 아 10이상부터는 슬라이스가 안되네 -> 배열도 슬라이스가 되는구나
# 오 여기서 맵