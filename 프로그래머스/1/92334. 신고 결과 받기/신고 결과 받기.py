# 메일을 몇번 받나 즉 신고한 사람이

# 한사람이 동일인물에 대해서는 여러번 신고해도 한번으로 간주

# 사용자별로 신고한 내역(타사용자 이름) 딕셔너리 저장 (사용자를 키로 신고한 내역을 벨류로 저장. 중복은 안되니깐 set())
#     report 길이만큼 for문
#     딕셔너리 벨류에 set 넣기

# 사용자별로 신고당한 횟수? 딕셔너리 저장
#  id_list 길이만큼 for문
#   미리 id_list 배열을 키로 가지고 0값을 가진 기본 딕셔너리 생성
# 해당 딕셔너리에서 k값보다 크거나 같으면 따로 배열로 해당 사용자 명 저장

# 사용자별로 신고한 내역(타사용자 이름) 딕셔너리를 활용해 사용자별로 해당 사용자를 벨류로 가지고잇나 확인 후 있으면 count +=1 후 배열에 저장
#       이중for문 id_list길이를 앞 카운트한 길이만큼 if in 확인
# 반환
def solution(id_list, report, k):
    answer = []
    report_dic = {}
    
# 사용자별로 신고한 내역(타사용자 이름) 딕셔너리 저장 (사용자를 키로 신고한 내역을 벨류로 저장. 중복은 안되니깐 set())
    for i in id_list:
        report_dic[i] = set()
    
    for i in report:
        reporter, reported = i.split(" ")
        report_dic[reporter].add(reported)

# 사용자별로 신고당한 횟수? 딕셔너리 저장
    report_count = {}
    for i in id_list:
        report_count[i] = 0
    # print(report_dic) 'muzi': {'neo', 'frodo'}, 'frodo': {'neo'}, 'apeach': {'muzi', 'frodo'}, 'neo': set()}
    

    for i in report_count:
        for j in report_dic.values():
            if i in j:
                report_count[i] += 1
    # print(report_count) 	{'muzi': 1, 'frodo': 2, 'apeach': 0, 'neo': 2}
# 해당 딕셔너리에서 k값보다 크거나 같으면 따로 배열로 해당 사용자 명 저장
    reportedId = []
    for i in report_count:
        if report_count[i] >= int(k):
            reportedId.append(i)

    # 사용자별로 신고한 내역(타사용자 이름) 딕셔너리를 활용해 사용자별로 해당 사용자를 벨류로 가지고잇나 확인 후 있으면 count +=1 후 배열에 저장
#       이중for문 id_list길이를 앞 카운트한 길이만큼 if in 확인

    for i in report_dic:
        count = 0
        for j in reportedId:
            if j in report_dic[i]:
                count +=1
        answer.append(count)
        
    
    return answer


# a = "abc def" 일때 split 테스트 -> b,c = a.split(" ")
# set도 동일하게 if 1 in set 사용가능
# set()이것만 되나 dic처럼 {}이런거 안되나
# 딕셔너리 벨류 안에 set을 넣을수있나? ㅇㅇ 가능하다 dic[key] = set()
# 설계 22분
# for문에서 k썼다가 매개변수로 k들어온거 값이 바껴씅ㅁ
# for무네서 계속 키값을 가져와서 values() Q뽑음