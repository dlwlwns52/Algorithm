# 1. number 모두 더하기 - 이게 연속으로 사야할 날
# 2. discount 길이 구하기 - 행사하는날
# 3. total = dicount - number -> 살수있는날 + 1해서 for 문 계산
# 4. 딕셔너리 생성 want_dic = {}
# 5. 딕셔너리에 want 값 넣기
#   for 문으로 해당 키에 number 값넣기
# 6. total for문 want_dic는 반복마다 동일해야하니 반복시마다 초기화
# 7. total for문안에서 끝날때마다 모든 딕셔너리 값이 0인지 체크
# 0이라면 +1
from collections import Counter
def solution(want, number, discount):
    answer = 0
    number_sum = 0
#1
    for i in number:
        number_sum += i
#2
    discount_len = len(discount)
# 3
    total = discount_len - number_sum + 1
# 4, 5
    want_dic = {}
    for i in range(len(number)):
        want_dic[want[i]] = number[i]
# 6, 7
    for i in range(total):
        imsi = []
        for k in range(i, number_sum+i):
            imsi.append(discount[k])
        else:
            if Counter(imsi) == want_dic:
                answer += 1
    return answer
        
#         해당키가 없으면 바로 리턴
# 있으면 -=1

# 각 딕셔너리가 동일한지 해당 딕셔너리가 0 인지 확인하는건 수동으로밖에 못하나
# 키와 값이 같으면 딕셔너리가 동일하다고 하는거 같다.
# 키가 없으면 에러
#   if "apple" in want_dic: 이런식으로 비교하면 키별로 비교가 된다.
# 딕셔너리도 값을 그냥 = 으로 하면 원본도 바뀐다 -> .copy()로 해야한다
# 딕셔너리 for a in dic: 하면 벨류값으로나오나? -> 키값으로나온다.