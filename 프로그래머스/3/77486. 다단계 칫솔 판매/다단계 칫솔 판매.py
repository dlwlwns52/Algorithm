# ["john", "mary", "edward", "sam", "emily", "jaimie", "tod", "young"]
# ["-",       "-", "mary", "edward", "mary", "mary", "jaimie", "edward"]

# ["young", "john", "tod", "emily", "mary"]
# [12,      4,       2,      5,       10]

#  주의 12원일때 10퍼하면 1.2원 -> 1원처리
#  주의 첫째자리 수일경우에는 10퍼 ㄴ 끝
# 1. 딕셔너리 사용,,? 어떻게 접근할지 감이 안잡힌다
# 2. result배열 enroll길이만큼 0으로 초기화
# 3. 이중 for문하기에는 제약이있으니 enroll for문돌고 인덱스하고 대상자 설정? ex) info = {young : (7, edward)}


# 4. seller for문 - 딕셔너리 키검색
# while True로 벨류값이 '-'인경우 멈추기
# 5. 우선 해당 인덱스에 10퍼
# 해당 인덱스에 해당하는 amount 개수*100 - 딕셔너리 매칭?


from math import ceil
def solution(enroll, referral, seller, amount):
    result = [0 for _ in range(len(enroll))]
    enroll_dic = {}
    for i in range(len(enroll)):
        enroll_dic[enroll[i]] = (i, referral[i])
            
#  주의 12원일때 10퍼하면 1.2원 -> 1원처리
#  주의 첫째자리 수일경우에는 10퍼 ㄴ 끝
#     seller for문 - 딕셔너리 키검색
#  우선 가격 부터 정하고 해당 가격에서 10퍼 뺀 금액 처음 구성원에게 넣기
#  
#   넣기 전에 첫째자리 수입원인 경우는 그대로 종료
    for i in range(len(seller)):
            mount = amount[i] * 100
            target = seller[i]
            while True:
                if mount // 10 == 0:
                    result[enroll_dic[target][0]] += int(mount)
                    break
                else:
                    result[enroll_dic[target][0]] += ceil(mount * 0.9)
                    mount = mount * 0.1
                    if enroll_dic[target][1] == "-":
                        break
                    target = enroll_dic[target][1]
                # print(mount)
                # print(result)
                # print("=======================")
                    # print(f"targett : {targett}")
    # print(result)
    return result


# 아니 10.8원이어서 10원ㅇ넣는데 11원넣어야함?