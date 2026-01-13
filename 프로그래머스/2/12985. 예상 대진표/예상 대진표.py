# 13579

from math import ceil
def solution(n,a,b):
    answer = 0

    while True:
        if a == b:
            break
        a = (a+1)//2
        b = (b+1)//2
        print(f"a : {a}")
        print(f"b : {b}")
        answer +=1

    return answer

