# 인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다. => sorted하면 해결된다

#  딕셔너리 사용 -> for문 후 매칭?
#  a: car e : bed u : sun
#  sorted(, key = lambda x: x[0] )

# 1. for 문돌려서 튜플로 n번째 알파벳과 알파벳을 매칭한다.
# 2. sort하는데 첫번째거 기준으로 한다.
# 3. 두번째값만 순서대로 빼서 return
def solution(strings, n):
    arr = []
    answer = []
    strings.sort()
    for i in strings:
        arr.append((i[n], i))
    
    arr.sort(key = lambda x : x[0])
    for i in arr:
        answer.append(i[1])
        
        
    return answer