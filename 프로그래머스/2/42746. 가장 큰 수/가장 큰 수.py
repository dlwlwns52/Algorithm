# 앞자리가 커야됨
# 앞자리가 같은 경우에는 뒷자리가 큰순, 
# 앞자리가 같은 경우에 길이가 다르다면 짧은 길이는 앞자리로 채움?

# 문자열로 바꾸기
# 가장 앞자리 순을 기준으로 정렬

# 네자리로 만들고 다
# 그걸 기존 numbers가 키값으로하고 네자리는 값으로매칭
# 
def solution(numbers):
    numbers = list(map(str, numbers))
    numbers.sort(key=lambda x: x*3, reverse=True)
    return str(int(''.join(numbers)))
# [980, 93, 9]
# 93980
# 98930]

#  네자리수로 만든다 전부