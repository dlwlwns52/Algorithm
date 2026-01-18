# 포켓몬 종류의 개수

# nums의 길이 저장
#  나누기 2 -> 가져갈 포켓몬 크기
# nums에 있는 값들 set에 넣기
# 123 234 23
# 만약 가져갈 포켓몬 크기가(3) set보다 크면{1,2} 그냥 set 길이 반환
# 작다면 {1,2,3} 2  -> 가져갈 크기 길이 반환
# 같다면 둘길이 아무거나 반환

def solution(nums):
    # answer = min(len(nums)//2, len(set(nums)))
    answer = 0
    length = len(nums) 
    pLen = length // 2
    pSet = set(nums)


    if len(pSet) < pLen:
        answer = len(pSet)
#         {1,2,3,4}   2
    elif len(pSet) > pLen:
        answer = pLen
    else:
        answer = pLen
    
    return answer