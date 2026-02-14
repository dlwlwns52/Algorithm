# 토핑종류가 공평해야됨
# set() 사용하는게 맞지 않을까
# 자른다의 기준 -> 1부터 n까지 시작
# 자르고 각 배열을 set해서 길이비교 같으면 count + 1

# ex) 01234

# 잘라서 set하는거는 n^2가 나온다
# 다 잘라봐야하는게 아닌가?
# 자른다는건 가정하면 자르고나서 중복제거 안하고 즉 set안쓰고 어ㄷ케 종류 개수를 판독하지?


# 전체 종류 개수 파악
# 해당 값이 기존 값이 없을때만 새롭게 set()?

# 딕셔너리 사용 기존 값 다 세워놓기
# 기존값 종류 개수, 현재 넣을 종류 개수 (set)설정
# 만약 딕셔너리 개수가 0이되면 현재 종류 개수 -1하고 크기비교
from collections import Counter
def solution(topping):
    answer = 0
    dic = {}
    a = set(topping)
    for i in a:
        dic[i] = 0
    for i in topping:
        dic[i] += 1
        
    right = dic
    right_len = len(dic)
    left = set()
    for i in topping:
        left.add(i)
        right[i] -=1
        if right[i] == 0:
            right_len -=1
        if len(left) == right_len:
            # print(left)
            answer +=1

    return answer



[1,2,3,4]