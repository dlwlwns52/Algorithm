

# 0제거
# 길이를 2진변환

# 0제거 count / 횟수 count -> z_count, count
# while 문 -> s != "1"
#   count +=1
#  0 보관 배열

#   for 문 ->  0 이면 0  append / z_count += 배열 길이
# s = "1" * (s길이 - 배열 길이)

def solution(s):
    answer = []
    
    count = 0
    z_count = 0
    
    while s != "1":
        arr = []
        for i in s:
            if i == "0":
                arr.append("0")
                
        z_count += len(arr)
        s = str(bin(len(s) - len(arr)))[2:]
        count += 1
        
    answer.append(count)
    answer.append(z_count)

    
    return answer