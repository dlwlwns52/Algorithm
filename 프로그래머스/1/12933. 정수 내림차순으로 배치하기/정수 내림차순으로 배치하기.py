def solution(n):
    arr = []
    for i in str(n):
        arr.append(i)
    arr.sort(reverse = True)
    
    answer = ''.join(arr)
    return int(answer)